#include <stdio.h>

void bityazdir(unsigned int x) {
	unsigned int maske = 1 << 15;
	for(int i = 1 ; i <= 16 ; i++) {
		if(x & maske) {
			printf("1");
		} else {
			printf("0");
		}
		x <<= 1;
		if(i % 8 == 0) {
			printf(" ");
		}
	}
}

unsigned int tersineCevir(unsigned int x) {
	unsigned int ters = 0;
    for(int i = 0; i < 16; i++) {
        ters <<= 1;
        if(x & 1)
            ters |= 1;
        x >>= 1;
    }
    return ters;
}

int main() {
	unsigned int sayi;
	printf("Sayiyi giriniz: ");
	scanf("%u", &sayi);
	printf("\nGirdiginiz sayi\t\t= %u\t\t", sayi);
	bityazdir(sayi);
	unsigned int ters = tersineCevir(sayi);
	printf("\nTers cevrilmis hali\t= %u\t\t", ters);
	bityazdir(ters);
	return 0;
}
