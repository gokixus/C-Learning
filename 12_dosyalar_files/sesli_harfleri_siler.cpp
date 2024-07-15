#include <stdio.h>
#include <string.h>
#include <ctype.h> // Include this header for character manipulation functions

int main() {
    char dosyaAdi[30];
    printf("Dosya adini giriniz: ");
    scanf("%s", dosyaAdi);

    FILE *dosya = fopen(dosyaAdi, "r");
    if (dosya == NULL) {
        printf("Dosya acilamadi.\n");
        return 1;
    }

    char yeniDosyaAdi[30];
    strcpy(yeniDosyaAdi, dosyaAdi);
    strcat(yeniDosyaAdi, ".ssz");

    FILE *yeniDosya = fopen(yeniDosyaAdi, "w");
    if (yeniDosya == NULL) {
        printf("Yeni dosya olusturulamadi.\n");
        return 1;
    }

    char cumle[1000];
    while (fgets(cumle, sizeof(cumle), dosya)) {
        int j = 0;
        for (int i = 0; cumle[i] != '\0'; i++) {
            if (isalpha(cumle[i])) { // Check if the character is a letter
                if (j == 0 || !strchr("aeiouAEIOU", cumle[i])) {
                    cumle[j++] = cumle[i];
                }
            } else {
                cumle[j++] = cumle[i];
            }
        }
        cumle[j] = '\0';
        fputs(cumle, yeniDosya);
    }

    fclose(dosya);
    fclose(yeniDosya);
    printf("Islem tamamlandi. Yeni dosya adi: %s\n", yeniDosyaAdi);
    return 0;
}

