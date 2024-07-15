#include <stdio.h>

int main() {
	int sayi;
	int yeniAdet = 0;
	int yeniSayi = 0;
	
	for(int i = 10 ; i<= 50 ; i++) {
		int adet = 1;
		sayi = i;
		while(sayi != 1) {
			if(sayi%2 == 0) {
				sayi = sayi/2;
			}
			else{
				sayi = sayi*3 + 1;
			}
			adet++;
		if(adet > yeniAdet) {
			yeniAdet = adet;
			yeniSayi = i;
			}
		}
	}
	printf("Aranan sayi: %d", yeniSayi);
	printf("\nSeri %d adet sayidan olusur.", yeniAdet);
	
	return 0;
}
