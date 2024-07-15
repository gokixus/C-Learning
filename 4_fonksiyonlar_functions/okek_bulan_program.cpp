#include <stdio.h>

int okekBul(int sayi1, int sayi2) {
	int obeb, okek;
	for(int i = 1 ; i <= sayi1 && i <= sayi2 ; i++) {
		if(sayi1 % i == 0 && sayi2 % i == 0) {
			obeb = i;
		}
	}
	okek = (sayi1*sayi2)/obeb;
	printf("OKEK = %d", okek);
}

int main() {
	int sayi1, sayi2;
	printf("Iki pozitif tamsayi giriniz : ");
	scanf("%d%d", &sayi1, &sayi2);
	
	while(sayi1 < 0 || sayi2 < 0) {
		printf("Lutfen pozitif tam sayi giriniz : ");
		scanf("%d%d", &sayi1, &sayi2);
	}
	
	okekBul(sayi1, sayi2);
	return 0;
}
