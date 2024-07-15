#include <stdio.h>
#include <string.h>

// Öðrenci bilgilerini temsil eden yapý (struct)
struct Ogrenci {
    char ad[50];
    char bolum[50];
    int yas;
    long telefon;
    int okulNumarasi;
};

int main() {
    // Dosyayý aç
    FILE *dosya = fopen("ogrenci.bilgileri.dat", "r");
    if (dosya == NULL) {
        printf("Dosya acilamadi.\n");
        return 1;
    }

    int arananNumara;
    printf("Ogrenci numarasini girin: ");
    scanf("%d", &arananNumara);

    // Dosyanýn sonuna kadar okuma iþlemi
    while (!feof(dosya)) {
        struct Ogrenci ogrenci;
        int okunan = fscanf(dosya, "Ad: %49s\nSoyad: %*s\nNo: %d\nBölüm: %49s\nCinsiyet: %*c\nDoðum Yeri: %*s\nYaþ: %d\nTelefon: %ld\n",
                            ogrenci.ad, &ogrenci.okulNumarasi, ogrenci.bolum, &ogrenci.yas, &ogrenci.telefon);
        if (okunan == 5 && ogrenci.okulNumarasi == arananNumara) {
            // Ekrana yazdýr
            printf("\nOgrenci Bilgileri:\n");
            printf("Adý: %s\nBolumu: %s\nYasi: %d\nTelefonu: %ld\n", ogrenci.ad, ogrenci.bolum, ogrenci.yas, ogrenci.telefon);
            fclose(dosya);
            return 0;
        }
    }

    printf("Öðrenci bulunamadý.\n");
    fclose(dosya);
    return 0;
}

