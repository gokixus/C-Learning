#include <stdio.h>
#include <stdlib.h>

int enBuyukMulayim(int basamakSayisi) {
    int i, j, carpim = 1, toplam = 0;
    int mulayimSayi = 0;
    for (i = 1; i <= basamakSayisi; i++) {
        carpim *= i;
        toplam += i;
    }
    for (i = carpim; i >= 1; i--) {
        if (i % toplam == 0) {
            for (j = basamakSayisi; j >= 1; j--) {
                if (i % j != 0) {
                    break;
                }
                if (j == 1) {
                    mulayimSayi = i;
                    return mulayimSayi;
                }
            }
        }
    }
    return mulayimSayi;
}

int main() {
    printf("%d\n", enBuyukMulayim(3));
    printf("%d\n", enBuyukMulayim(4));
    return 0;
}

