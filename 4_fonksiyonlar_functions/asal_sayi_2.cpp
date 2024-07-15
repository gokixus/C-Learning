#include <stdio.h>

int asalYaz(int sayi1, int sayi2) {
	int asal;
	for(int i = sayi1 ; i < sayi2; i++) {
		asal = 1;
		for(int j = 2 ; j <=  sayi1 ; j++) {
			if(i % j == 0) {
				asal = 0;
				break;
			}
		}
		if(asal == 1) {
			printf("%d, ", i);
		}
	}
}

int main() {
	int bas = 7, son = 21;
	asalYaz(2, 10);
	printf("\n--------------------------------\n");
	asalYaz(bas, son);
	return 0;
}
