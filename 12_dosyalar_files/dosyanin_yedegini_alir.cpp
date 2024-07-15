#include <stdio.h>
#include <string.h>

int main() {
    char kaynakDosyaAdi[100];
    char yedekDosyaAdi[100];
    FILE *kaynakDosya, *yedekDosya;
    char satir[100];

    printf("Kopyasý alýnacak dosyayý giriniz: ");
    scanf("%s", kaynakDosyaAdi);

    // .YED uzantýsýný ekleyerek yedek dosya adýný oluþtur
    strcpy(yedekDosyaAdi, kaynakDosyaAdi);
    strcat(yedekDosyaAdi, ".YED");

    kaynakDosya = fopen(kaynakDosyaAdi, "r");
    if (kaynakDosya == NULL) {
        printf("Dosya bulunamadý veya açýlamadý.\n");
        return 1;
    }

    yedekDosya = fopen(yedekDosyaAdi, "w");
    if (yedekDosya == NULL) {
        printf("Yedek dosya oluþturulamadý.\n");
        fclose(kaynakDosya);
        return 1;
    }

    while (fgets(satir, sizeof(satir), kaynakDosya) != NULL) {
        fputs(satir, yedekDosya);
    }

    printf("%s dosyasýnýn yedeði %s olarak oluþturuldu.\n", kaynakDosyaAdi, yedekDosyaAdi);

    fclose(kaynakDosya);
    fclose(yedekDosya);

    return 0;
}

