#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char dosyaAdi[25];
    printf("Hangi dosya hakkinda bilgi verilecek: ");
    scanf("%s", dosyaAdi);

    FILE *dosya = fopen(dosyaAdi, "r");
    if (dosya == NULL) {
        printf("Dosya acilamadi.\n");
        return 1;
    }

    int cumleSayisi = 0;
    int kelimeSayisi = 0;
    int karakterSayisi = 0;
    char karakter;

    while ((karakter = fgetc(dosya)) != EOF) {
        karakterSayisi++;

        if (karakter == '.' || karakter == '\n') {
            cumleSayisi++;
        }

        if (isspace(karakter)) {
            kelimeSayisi++;
        }
    }
    fclose(dosya);

    kelimeSayisi++;

    printf("Cumle sayisi = %d\n", cumleSayisi);
    printf("Kelime sayisi = %d\n", kelimeSayisi);
    printf("Karakter sayisi = %d\n", karakterSayisi);

    return 0;
}

