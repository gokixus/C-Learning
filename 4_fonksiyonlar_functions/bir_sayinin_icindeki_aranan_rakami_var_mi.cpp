#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int icindeVarMi(int, int);

int main() {
	srand(time(NULL));
	int rastgeleRakam = rand() % 10;
	int rastgeleSayi = rand();

	printf("%d", icindeVarMi(54572, 3));
	printf("\n%d", icindeVarMi(646, 4));
	printf("\n%d(Aranan : %d) = %d", rastgeleSayi, rastgeleRakam, icindeVarMi(rastgeleSayi, rastgeleRakam));
}

int icindeVarMi(int sayi, int arananRakam) {
	int aranan = 0;
	while(sayi > 0) {
		aranan = sayi%10;
		if(aranan == arananRakam) {
			return 1;
		}
		sayi /= 10;
	}
	return 0;
}
