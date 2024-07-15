#include <stdio.h>

int main() {
    char bulunacakDosya[100];
    int konum;

    // Kullanýcýdan dosya adýný ve karakter konumunu al
    printf("Dosyanýn adýný giriniz: ");
    scanf("%s", bulunacakDosya);

    printf("Kaçýncý karakteri yazdýrmak istiyorsunuz (1'den baþlayarak): ");
    scanf("%d", &konum);

    // Dosyayý aç ve hata kontrolü yap
    FILE *dosya1 = fopen(bulunacakDosya, "r");
    if (dosya1 == NULL) {
        printf("Dosya açýlamadý.\n");
        return 1;
    }

    FILE *dosya2 = fopen("karakter.txt", "w");
    if (dosya2 == NULL) {
        printf("Dosya açýlamadý.\n");
        fclose(dosya1);
        return 1;
    }

    char c;
    int i = 1;  // Karakter pozisyonu sayacý (1'den baþlýyor)
    int karakterBulundu = 0;

    // Dosyayý karakter karakter oku
    while ((c = fgetc(dosya1)) != EOF) {
        if (i == konum) {
            fprintf(dosya2, "%c\n", c);
            karakterBulundu = 1;
            break;
        }
        i++;
    }

    if (!karakterBulundu) {
        fprintf(dosya2, "Dosyada %d. karakter bulunamadý.\n", konum);
    }

    fclose(dosya1);
    fclose(dosya2);

    if (karakterBulundu) {
        printf("%d. karakter baþarýyla yazýldý.\n", konum);
    } else {
        printf("Dosyada %d. karakter bulunamadý.\n", konum);
    }

    return 0;
}

