#include <stdio.h>

int main () {
	int sayi1;
	int sayi2;
	int kalan = 1;
	int obeb = 1;
	
	printf("1. tam sayi giriniz : ");
	scanf("%d", &sayi1);
	printf("2. tam sayi giriniz : ");
	scanf("%d", &sayi2);
	
	while(kalan != 0) {
		if(sayi1 > sayi2) {
			kalan = sayi1 % sayi2;
			obeb = sayi2;
			sayi1 = sayi2;
			sayi2 = kalan;
		}
		else {
		    kalan = sayi2 % sayi1;
			obeb = sayi1;
			sayi2 = sayi1;
			sayi1 = kalan;
		}
	}
	printf("OBEB : %d", obeb);
	
	return 0;
}
