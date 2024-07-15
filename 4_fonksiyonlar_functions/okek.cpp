#include <stdio.h>

int okek(int, int);

int main() {
	printf("%d", okek(24, 32));
	return 0;
}

int okek(int sayi1, int sayi2) {
	int obeb;
	for(int i = 1; i <= sayi1 && i <= sayi2 ; i++) {
		if(sayi1 % i == 0 && sayi2 % i == 0) {
			obeb = i;
		}
	}
	return (sayi1*sayi2)/obeb;
}
