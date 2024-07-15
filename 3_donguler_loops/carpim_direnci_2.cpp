#include <stdio.h>

int main() {
	int sayi;
	int max_sayi;
	int onlar;
	int birler;
	int max_adet = 0;
	
	for(int i = 10 ; i<= 99 ; i++) {
		sayi = i;
		int adet = 0;
		while(sayi > 9) {
			onlar = sayi/10;
			birler = sayi%10;
			sayi = onlar*birler;
			adet++;
		}
		if(adet > max_adet) {
			max_adet = adet;
			max_sayi = i;
		}
	}
	printf("Carpim direnci en buyuk olan sayi = %d (Carpim direnci = %d)", max_sayi, max_adet);
	return 0;
}
