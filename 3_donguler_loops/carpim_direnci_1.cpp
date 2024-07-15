#include <stdio.h>

int main() {
	int sayi;
	int onlar;
	int birler;
	
	for(int i = 10 ; i<= 99 ; i++) {
		sayi = i;
		int adet = 0;
		while(sayi > 9) {
			onlar = sayi/10;
			birler = sayi%10;
			sayi = onlar*birler;
			adet++;
		}
		printf("%d. sayisinin carpim direnci = %d\n", i, adet);
	}
	return 0;
}
