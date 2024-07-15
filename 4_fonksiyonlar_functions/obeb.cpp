#include <stdio.h>

int obeb(int, int);

int main() {
	printf("%d", obeb(160, 150));
	return 0;
}

int obeb(int sayi1, int sayi2) {
	int obebsayi;
	for(int i = 1 ; i <= sayi1 && i <= sayi2 ; i++) {
		if(sayi1 % i == 0 && sayi2 % i == 0) {
			obebsayi = i;
		}
	}
	return obebsayi;
}
