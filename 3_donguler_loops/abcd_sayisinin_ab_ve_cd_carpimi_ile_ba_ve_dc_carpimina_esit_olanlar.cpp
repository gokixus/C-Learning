#include <stdio.h>

int main() {
	int abcd;
	int a, b, c, d;
	int ab, cd, ba, dc;
	int toplam = 0;
	
	printf("Sayilar = ");
	for(abcd = 1000 ; abcd <= 9999 ; abcd++) {
		a = abcd/1000;
		b = (abcd/100)%10;
		c = (abcd/10)%10;
		d = abcd%10;
		ab = abcd/100;
		cd = abcd%100;
		ba = ((abcd/100)%10)*10 + a;
		dc = (abcd%10)*10 + c;
		
		if(ab*cd == ba*dc) {
			printf("%d, ", abcd);
			toplam++;
		}
	}
	printf("\nToplam = %d adet", toplam);
	return 0;
}
