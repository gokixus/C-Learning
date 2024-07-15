#include <stdio.h>

// ��renci bilgilerini temsil eden yap� (struct)
struct Ogrenci {
    char ad[50];
    char bolum[50];
    int yas;
    long telefon;
};

int main() {
    // Dosyay� a�
    FILE *dosya = fopen("ogrenci.bilgileri.dat", "r");
    if (dosya == NULL) {
        printf("Dosya a��lamad�.\n");
        return 1;
    }

    // Ba�l�k sat�r�n� yazd�r
    printf("%-20s%-20s%-10s%-15s\n", "ADI", "BOLUMU", "YASI", "TELEFONU");

    // Dosyan�n sonuna kadar okuma i�lemi
    while (!feof(dosya)) {
        struct Ogrenci ogrenci;
        int okunan = fscanf(dosya, "Ad: %49s\nSoyad: %*s\nNo: %*ld\nB�l�m: %49s\nCinsiyet: %*c\nDo�um Yeri: %*s\nYa�: %d\nTelefon: %ld\n",
                            ogrenci.ad, ogrenci.bolum, &ogrenci.yas, &ogrenci.telefon);
        if (okunan == 4) {
            // Ekrana yazd�r
            printf("%-20s%-20s%-10d%-15ld\n", ogrenci.ad, ogrenci.bolum, ogrenci.yas, ogrenci.telefon);
        }
    }

    // Dosyay� kapat
    fclose(dosya);

    return 0;
}

