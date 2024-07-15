#include <stdio.h>
#include <string.h>

// ��renci bilgilerini temsil eden yap� (struct)
struct Ogrenci {
    char ad[50];
    char bolum[50];
    int yas;
    long telefon;
    int okulNumarasi;
};

int main() {
    // Dosyay� a�
    FILE *dosya = fopen("ogrenci.bilgileri.dat", "r");
    if (dosya == NULL) {
        printf("Dosya acilamadi.\n");
        return 1;
    }

    int arananNumara;
    printf("Ogrenci numarasini girin: ");
    scanf("%d", &arananNumara);

    // Dosyan�n sonuna kadar okuma i�lemi
    while (!feof(dosya)) {
        struct Ogrenci ogrenci;
        int okunan = fscanf(dosya, "Ad: %49s\nSoyad: %*s\nNo: %d\nB�l�m: %49s\nCinsiyet: %*c\nDo�um Yeri: %*s\nYa�: %d\nTelefon: %ld\n",
                            ogrenci.ad, &ogrenci.okulNumarasi, ogrenci.bolum, &ogrenci.yas, &ogrenci.telefon);
        if (okunan == 5 && ogrenci.okulNumarasi == arananNumara) {
            // Ekrana yazd�r
            printf("\nOgrenci Bilgileri:\n");
            printf("Ad�: %s\nBolumu: %s\nYasi: %d\nTelefonu: %ld\n", ogrenci.ad, ogrenci.bolum, ogrenci.yas, ogrenci.telefon);
            fclose(dosya);
            return 0;
        }
    }

    printf("��renci bulunamad�.\n");
    fclose(dosya);
    return 0;
}

