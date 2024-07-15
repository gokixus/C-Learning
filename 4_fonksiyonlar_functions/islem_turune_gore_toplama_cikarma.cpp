#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int islemYaz(int basamak, char islem) {
	int sayi1;
	int sayi2;
	int sonuc;
	
	if(basamak == 3) {
		sayi1 = rand() % 900 + 100;
		sayi2 = rand() % 900 + 100;
	}
	else if(basamak == 2) {
		sayi1 = rand() % 90 + 10;
		sayi2 = rand() % 90 + 10;
	}
	else {
		sayi1 = rand() % 10;
		sayi2 = rand() % 10;
	}
	
	if(islem == '+') {
		sonuc = sayi1 + sayi2;
	}
	else if(islem == '-') {
		if(sayi1 < sayi2 ) {
			int enKucuk = sayi1;
			sayi1 = sayi2;
			sayi2 = enKucuk;
		}
		sonuc = sayi1 - sayi2;
	}
	else {
		printf("Yanlis islem turu ! \n");
		return 0;
	}
	
	printf("%d %c %d = %d\n", sayi1, islem, sayi2, sonuc);
}

int main() {
	srand(time(NULL));
	
	islemYaz(3, '+');
	islemYaz(3, '-');
	islemYaz(2, '+');
	islemYaz(2, '-');
	islemYaz(1, '+');
	islemYaz(1, '-');
	
	return 0;
}
