#include <stdio.h>

// Öðrenci bilgilerini temsil eden yapý (struct)
struct Ogrenci {
    char ad[50];
    char bolum[50];
    int yas;
    long telefon;
};

int main() {
    // Dosyayý aç
    FILE *dosya = fopen("ogrenci.bilgileri.dat", "r");
    if (dosya == NULL) {
        printf("Dosya açýlamadý.\n");
        return 1;
    }

    // Baþlýk satýrýný yazdýr
    printf("%-20s%-20s%-10s%-15s\n", "ADI", "BOLUMU", "YASI", "TELEFONU");

    // Dosyanýn sonuna kadar okuma iþlemi
    while (!feof(dosya)) {
        struct Ogrenci ogrenci;
        int okunan = fscanf(dosya, "Ad: %49s\nSoyad: %*s\nNo: %*ld\nBölüm: %49s\nCinsiyet: %*c\nDoðum Yeri: %*s\nYaþ: %d\nTelefon: %ld\n",
                            ogrenci.ad, ogrenci.bolum, &ogrenci.yas, &ogrenci.telefon);
        if (okunan == 4) {
            // Ekrana yazdýr
            printf("%-20s%-20s%-10d%-15ld\n", ogrenci.ad, ogrenci.bolum, ogrenci.yas, ogrenci.telefon);
        }
    }

    // Dosyayý kapat
    fclose(dosya);

    return 0;
}

