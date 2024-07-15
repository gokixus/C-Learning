#include <stdio.h>

int main() {
	int sayi;
	int rakam;
	int faktoriyel;
	int toplam = 0;
	
	for(sayi = 100 ; sayi<=999 ; sayi++) {
		rakam = sayi%10;
		faktoriyel = 1;
		while(rakam > 1) {
			faktoriyel *= rakam;
			rakam--;
		}
		toplam += faktoriyel;
		
		rakam = (sayi/10)%10;
		faktoriyel = 1;
		while(rakam>1) {
			faktoriyel *= rakam;
			rakam--;
		}
		toplam += faktoriyel;
		
		rakam = sayi/100;
		faktoriyel = 1;
		while(rakam>1) {
			faktoriyel *= rakam;
			rakam--;
		}
		toplam += faktoriyel;
		
		if(sayi == toplam) {
			printf("Aradiginiz sayi = %d\n", sayi);
		}
		
		toplam = 0;
	}
	return 0;
}
