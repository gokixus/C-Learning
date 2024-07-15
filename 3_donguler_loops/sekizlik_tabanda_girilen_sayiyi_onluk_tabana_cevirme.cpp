#include <stdio.h>

int main() {
	int sekizlik;
	printf("Sekizlik tabanda sayi giriniz: ");
	scanf("%d", &sekizlik);
	
	int onluk = 0;
	int basamak = 1;
	int kalan;
	
	while(sekizlik != 0) {
		kalan = sekizlik % 10;
		onluk += kalan * basamak;
		basamak *= 8;
		sekizlik /= 10;
	}
	printf("Onluk tabandaki karsiligi: %d", onluk);
	
	return 0;
}
