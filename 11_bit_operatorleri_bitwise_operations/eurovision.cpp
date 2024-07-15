#include <stdio.h>

// Fonksiyon prototipleri
void ulkeKoduvePuani(unsigned int sayi, unsigned int *kod, unsigned int *puan);

int main() {
    unsigned int sikistirilmis, kod, puan;

    // Kullan�c�dan s�k��t�r�lm�� say�y� al
    printf("Sikistrilmis sayiyi giriniz: ");
    scanf("%u", &sikistirilmis);

    // Ulke kodu ve puan�n� hesapla
    ulkeKoduvePuani(sikistirilmis, &kod, &puan);

     if (kod >= 1 && kod <= 36) {
        // Sonu�lar� ekrana yazd�r
        printf("�lke Kodu: %u\n", kod);
        printf("Verilen Puan: %u\n", puan);
    } else {
        printf("Hatal� �lke kodu! 1 ile 36 aras�nda olmal�d�r.\n");
    }

    return 0;
}

// S�k��t�r�lm�� say�y� ayr��t�ran fonksiyon
void ulkeKoduvePuani(unsigned int sayi, unsigned int *kod, unsigned int *puan) {
    // �lk 6 biti (�lke kodunu) al
    *kod = sayi >> 10;

    // Geriye kalan 10 biti (puan�) al
    *puan = sayi & 0x3FF; // 10 bitlik maske

    // Puan� hesapla (bitlerdeki 1'lerin say�s�)
    unsigned int sayac = 0;
    for (unsigned int maske = 1; maske <= 0x3FF; maske <<= 1) {
        if ((sayi & maske) != 0) {
            sayac++;
        }
    }
    *puan = sayac;
}

