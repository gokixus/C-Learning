#include <stdio.h>

int main() {
    char bulunacakDosya[100];
    int konum;

    // Kullan�c�dan dosya ad�n� ve karakter konumunu al
    printf("Dosyan�n ad�n� giriniz: ");
    scanf("%s", bulunacakDosya);

    printf("Ka��nc� karakteri yazd�rmak istiyorsunuz (1'den ba�layarak): ");
    scanf("%d", &konum);

    // Dosyay� a� ve hata kontrol� yap
    FILE *dosya1 = fopen(bulunacakDosya, "r");
    if (dosya1 == NULL) {
        printf("Dosya a��lamad�.\n");
        return 1;
    }

    FILE *dosya2 = fopen("karakter.txt", "w");
    if (dosya2 == NULL) {
        printf("Dosya a��lamad�.\n");
        fclose(dosya1);
        return 1;
    }

    char c;
    int i = 1;  // Karakter pozisyonu sayac� (1'den ba�l�yor)
    int karakterBulundu = 0;

    // Dosyay� karakter karakter oku
    while ((c = fgetc(dosya1)) != EOF) {
        if (i == konum) {
            fprintf(dosya2, "%c\n", c);
            karakterBulundu = 1;
            break;
        }
        i++;
    }

    if (!karakterBulundu) {
        fprintf(dosya2, "Dosyada %d. karakter bulunamad�.\n", konum);
    }

    fclose(dosya1);
    fclose(dosya2);

    if (karakterBulundu) {
        printf("%d. karakter ba�ar�yla yaz�ld�.\n", konum);
    } else {
        printf("Dosyada %d. karakter bulunamad�.\n", konum);
    }

    return 0;
}

