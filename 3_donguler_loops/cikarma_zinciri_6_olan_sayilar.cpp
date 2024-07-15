#include <stdio.h>

int main() {
	int sayi;
	int ters_sayi;
	int yeniSayi;
	int sayi_adet = 0;
	
	printf("Cikarma zinciri 6 olan iki basamakli sayilar : \n");
	for(int i = 10 ; i <= 99 ; i++) {
		sayi = i;
		int adim = 1;
		while(sayi > 9) {
			ters_sayi = (sayi%10)*10 + sayi/10;
			if(ters_sayi > sayi) {
				yeniSayi = ters_sayi - sayi;
				ters_sayi = yeniSayi;
				sayi = ters_sayi;
			}
			if(sayi > ters_sayi) {
				yeniSayi = sayi - ters_sayi;
				sayi = yeniSayi;
				ters_sayi = sayi;
			}
			adim++;
		}
		if(adim == 6) {
			printf("%d, ", i);
			sayi_adet++;
		}
	}
	printf("\nToplam %d adet", sayi_adet);
	return 0;
}
