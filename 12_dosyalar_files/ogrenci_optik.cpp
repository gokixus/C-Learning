#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char ogrenciNo[15];
    printf("Ogrenci nosu giriniz: ");
    scanf("%s", ogrenciNo);
    
    char ogrenciDosyaAdi[25];
    strcpy(ogrenciDosyaAdi, ogrenciNo);
    strcat(ogrenciDosyaAdi, ".txt");
    
    FILE *ogrenciDos = fopen(ogrenciDosyaAdi, "r");
    FILE *anahtar = fopen("anahtar.txt", "r");

    if (!ogrenciDos) {
        printf("Ogrenci dosyasi acilamadi!\n");
        return 1;
    }
    if (!anahtar) {
        printf("Anahtar dosyasi acilamadi!\n");
        fclose(ogrenciDos);
        return 1;
    }

    char ogrenci_cevap[10];  // To read each answer line by line
    char anahtar_cevap[10];  // To read each answer line by line

    int dogru = 0, yanlis = 0, bos = 0;

    while (fgets(ogrenci_cevap, sizeof(ogrenci_cevap), ogrenciDos) && fgets(anahtar_cevap, sizeof(anahtar_cevap), anahtar)) {
        // Remove newline characters if present
        if (ogrenci_cevap[strlen(ogrenci_cevap) - 1] == '\n') {
            ogrenci_cevap[strlen(ogrenci_cevap) - 1] = '\0';
        }
        if (anahtar_cevap[strlen(anahtar_cevap) - 1] == '\n') {
            anahtar_cevap[strlen(anahtar_cevap) - 1] = '\0';
        }

        if (ogrenci_cevap[0] == '\0') {
            bos++;
        } else if (ogrenci_cevap[0] == anahtar_cevap[0]) {
            dogru++;
        } else {
            yanlis++;
        }
    }

    float net = dogru - (yanlis / 4.0);

    printf("%s nolu ogrencinin:\n", ogrenciNo);
    printf("Dogru sayisi: %d\n", dogru);
    printf("Yanlis sayisi: %d\n", yanlis);
    printf("Bos sayisi: %d\n", bos);
    printf("Net: %.2f\n", net);

    fclose(ogrenciDos);
    fclose(anahtar);

    return 0;
}

