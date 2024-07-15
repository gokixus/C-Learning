#include <stdio.h>
#include <string.h>

int main() {
    char kaynakDosyaAdi[100];
    char yedekDosyaAdi[100];
    FILE *kaynakDosya, *yedekDosya;
    char satir[100];

    printf("Kopyas� al�nacak dosyay� giriniz: ");
    scanf("%s", kaynakDosyaAdi);

    // .YED uzant�s�n� ekleyerek yedek dosya ad�n� olu�tur
    strcpy(yedekDosyaAdi, kaynakDosyaAdi);
    strcat(yedekDosyaAdi, ".YED");

    kaynakDosya = fopen(kaynakDosyaAdi, "r");
    if (kaynakDosya == NULL) {
        printf("Dosya bulunamad� veya a��lamad�.\n");
        return 1;
    }

    yedekDosya = fopen(yedekDosyaAdi, "w");
    if (yedekDosya == NULL) {
        printf("Yedek dosya olu�turulamad�.\n");
        fclose(kaynakDosya);
        return 1;
    }

    while (fgets(satir, sizeof(satir), kaynakDosya) != NULL) {
        fputs(satir, yedekDosya);
    }

    printf("%s dosyas�n�n yede�i %s olarak olu�turuldu.\n", kaynakDosyaAdi, yedekDosyaAdi);

    fclose(kaynakDosya);
    fclose(yedekDosya);

    return 0;
}

