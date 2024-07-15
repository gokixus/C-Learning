#include <stdio.h>
#include <string.h>

#define MAX_OGRENCI 10
#define MAX_CEVAP 21

void score(int *toplamOgrenci, FILE *dosya) {
    int kimlikNo[MAX_OGRENCI];
    char cevapAnahtari[MAX_OGRENCI][MAX_CEVAP];
    char dogruCevap[MAX_CEVAP] = "aabcdaabcdaabcdaabcd";

    *toplamOgrenci = 0;

    // Read student data from file
    while (fscanf(dosya, "%d %20s", &kimlikNo[*toplamOgrenci], cevapAnahtari[*toplamOgrenci]) != EOF) {
        (*toplamOgrenci)++;
        if (*toplamOgrenci >= MAX_OGRENCI) {
            break;  // Prevent exceeding array bounds
        }
    }

    int maxScore = -1;
    int bestStudentId = -1;
	char bestCevap[MAX_CEVAP];
	
    // Score each student
    for (int i = 0; i < *toplamOgrenci; i++) {
        int score = 0;
        for (int j = 0; j < MAX_CEVAP-1; j++) {
            if (cevapAnahtari[i][j] == dogruCevap[j]) {
                score++;
            }
        }
        if (score > maxScore) {
            maxScore = score;
            bestStudentId = kimlikNo[i];
            strcpy(bestCevap, cevapAnahtari[i]);
        }
    }

    if (bestStudentId != -1) {
        printf("Enter key: %s\nBest Score :\n%d (%d)", bestCevap, bestStudentId, maxScore);
    }
}

int main() {
    FILE *pOku = fopen("students.txt", "r");
    if (!pOku) {
        perror("Dosya acilamadi.\n");
        return 1;  // Return an error code
    }

    int topOgrenci = 0;
    score(&topOgrenci, pOku);

    fclose(pOku);
    return 0;
}

