#include <stdio.h>

void okekBul(int sayi1, int sayi2) {
	int obeb;
	for(int i = 1 ; i <= sayi1 && i <= sayi2 ; i++) {
		if(sayi1 % i == 0 && sayi2 % i == 0) {
			obeb = i;
		}
	}
	printf("Obeb = %d\n", obeb);
}

int main() {
	okekBul(120, 150);
	
	int sayi1, sayi2;
	printf("\nLutfen iki tam sayi deger giriniz : ");
	scanf("%d%d", &sayi1, &sayi2);
	
	while(sayi1 < 0 || sayi2 < 0) {
		printf("Girilen degerler pozitif olmalidir. Lutfen tekrar deneyiniz : ");
		scanf("%d%d", &sayi1, &sayi2);
	}
	okekBul(sayi1, sayi2);
	return 0;
}
