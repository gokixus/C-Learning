#include <stdio.h>

int daireselMi(int sayi) {
    int basamakSayisi = 0, temp = sayi;
    while (temp > 0) {
        basamakSayisi++;
        temp /= 10;
    }
    int mod = 10;
    for (int i = 1; i < basamakSayisi; i++) {
        mod *= 10;
    }
    for (int i = 1; i < basamakSayisi; i++) {
        int ilkBasamak = sayi / mod;
        int kalan = sayi % mod;
        kalan *= 10;
        kalan += ilkBasamak;
        sayi = kalan;
        int kontrol = 0;
        for (int j = 2; j <= sayi / 2; j++) {
            if (sayi % j == 0) {
                kontrol = 1;
                break;
            }
        }
        if (kontrol == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    printf("1. satir = %d \n", daireselMi(102564));
    printf("2. satir = %d \n", daireselMi(123456));

    return 0;
}

