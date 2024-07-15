#include <stdio.h>

int main() {
    char bulunacakDosya[100];
    printf("Toplam karakter say�s�n� bulmak i�in dosyan�n ad�n� giriniz: ");
    scanf("%s", bulunacakDosya);
    
    FILE *dosya1 = fopen(bulunacakDosya, "r");
    if (dosya1 == NULL) {
        printf("Dosya a��lamad�.\n");
        return 1;
    }

    FILE *dosya2 = fopen("toplamkarakter.txt", "w");
    if (dosya2 == NULL) {
        printf("Dosya a��lamad�.\n");
        fclose(dosya1);
        return 1;
    }

    char c;
    int toplamKarakter = 0;
    
    while ((c = fgetc(dosya1)) != EOF) {
        toplamKarakter++;
    }

    fprintf(dosya2, "Toplam karakter say�s�: %d\n", toplamKarakter);

    fclose(dosya1);
    fclose(dosya2);

    printf("Karakter say�s� ba�ar�yla yaz�ld�.\n");

    return 0;
}

