#include <stdio.h>

int main() {
    char bulunacakDosya[100];
    printf("Toplam karakter sayýsýný bulmak için dosyanýn adýný giriniz: ");
    scanf("%s", bulunacakDosya);
    
    FILE *dosya1 = fopen(bulunacakDosya, "r");
    if (dosya1 == NULL) {
        printf("Dosya açýlamadý.\n");
        return 1;
    }

    FILE *dosya2 = fopen("toplamkarakter.txt", "w");
    if (dosya2 == NULL) {
        printf("Dosya açýlamadý.\n");
        fclose(dosya1);
        return 1;
    }

    char c;
    int toplamKarakter = 0;
    
    while ((c = fgetc(dosya1)) != EOF) {
        toplamKarakter++;
    }

    fprintf(dosya2, "Toplam karakter sayýsý: %d\n", toplamKarakter);

    fclose(dosya1);
    fclose(dosya2);

    printf("Karakter sayýsý baþarýyla yazýldý.\n");

    return 0;
}

