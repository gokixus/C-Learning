#include <stdio.h>

int main() {
	int sayac=1;
	int toplam=0;
	
	while(sayac <=100) {
		toplam+=sayac;
		sayac++;
	}
	printf("Sayilarin toplami %d", toplam);
	return 0;
}
