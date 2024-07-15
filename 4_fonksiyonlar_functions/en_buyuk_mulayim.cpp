#include <stdio.h>

int enBuyukMulayim(int basamakSayisi) {
	int mulayimSayi = 1;
	int carpim = 1;
	int toplam = 0;
	int i;
    for(i = 1 ; i <= basamakSayisi ; i++) {
    	mulayimSayi *= i; // burada 10 yerine i kullandýk
	}
	int kopya = mulayimSayi; // mulayimSayi'nin kopyasýný oluþturduk
	while(kopya > 0) {
		int rakam = kopya % 10;
		carpim *= rakam;
		toplam += rakam;
		kopya /= 10;
	}
	int carptopla = carpim * toplam;
	if(carptopla == kopya){ // burada mulayimSayi yerine kopya kullandýk
		return carptopla;
	}
	else {
		return 0;
	}
}

int main() {
    printf("%d\n", enBuyukMulayim(3));
    printf("%d\n", enBuyukMulayim(4));
    return 0;
}

