#include <stdio.h>

// Fonksiyon prototipleri
void ulkeKoduvePuani(unsigned int sayi, unsigned int *kod, unsigned int *puan);

int main() {
    unsigned int sikistirilmis, kod, puan;

    // Kullanıcıdan sıkıştırılmış sayıyı al
    printf("Sikistrilmis sayiyi giriniz: ");
    scanf("%u", &sikistirilmis);

    // Ulke kodu ve puanını hesapla
    ulkeKoduvePuani(sikistirilmis, &kod, &puan);

     if (kod >= 1 && kod <= 36) {
        // Sonuçları ekrana yazdır
        printf("Ülke Kodu: %u\n", kod);
        printf("Verilen Puan: %u\n", puan);
    } else {
        printf("Hatalı ülke kodu! 1 ile 36 arasında olmalıdır.\n");
    }

    return 0;
}

// Sıkıştırılmış sayıyı ayrıştıran fonksiyon
void ulkeKoduvePuani(unsigned int sayi, unsigned int *kod, unsigned int *puan) {
    // İlk 6 biti (ülke kodunu) al
    *kod = sayi >> 10;

    // Geriye kalan 10 biti (puanı) al
    *puan = sayi & 0x3FF; // 10 bitlik maske

    // Puanı hesapla (bitlerdeki 1'lerin sayısı)
    unsigned int sayac = 0;
    for (unsigned int maske = 1; maske <= 0x3FF; maske <<= 1) {
        if ((sayi & maske) != 0) {
            sayac++;
        }
    }
    *puan = sayac;
}

