#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

// Minimum deðeri bulma fonksiyonu
int min(int a, int b, int c) {
    if (a < b && a < c) return a;
    if (b < c) return b;
    return c;
}

// Levenshtein mesafesi hesaplama fonksiyonu
int levenshtein_distance(const char *s1, const char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int i, j;
    int matrix[len1 + 1][len2 + 1];

    // Ýlk satýrý ve sütunu doldurma
    for (i = 0; i <= len1; i++) matrix[i][0] = i;
    for (j = 0; j <= len2; j++) matrix[0][j] = j;

    // Matrisin geri kalanýný doldurma
    for (i = 1; i <= len1; i++) {
        for (j = 1; j <= len2; j++) {
            int cost = (s1[i - 1] == s2[j - 1]) ? 0 : 1;
            matrix[i][j] = min(matrix[i - 1][j] + 1,     // Silme
                               matrix[i][j - 1] + 1,     // Ekleme
                               matrix[i - 1][j - 1] + cost); // Deðiþtirme
        }
    }
    return matrix[len1][len2];
}

void similar_text(char *kelime, FILE *dosya, char *benzeri, int *en_iyi_mesafe) {
    char dosya_kelime[256];
    while (fscanf(dosya, "%s", dosya_kelime) != EOF) {
        int mesafe = levenshtein_distance(kelime, dosya_kelime);
        if (mesafe < *en_iyi_mesafe) {
            *en_iyi_mesafe = mesafe;
            strcpy(benzeri, dosya_kelime);
        }
    }
}

int main() {
    FILE *fOku = fopen("words.txt", "r");
    if (!fOku) {
        perror("Dosya acilamadi.\n");
        return 1;
    }

    char arama[25];
    printf("Search : ");
    scanf("%24s", arama);

    char benzeri[25] = "";
    int en_iyi_mesafe = INT_MAX;
    similar_text(arama, fOku, benzeri, &en_iyi_mesafe);

    fclose(fOku);

    if (en_iyi_mesafe != INT_MAX) {
        printf("Did you mean? %s (Distance: %d)\n", benzeri, en_iyi_mesafe);
    } else {
        printf("No similar word found.\n");
    }

    return 0;
}

