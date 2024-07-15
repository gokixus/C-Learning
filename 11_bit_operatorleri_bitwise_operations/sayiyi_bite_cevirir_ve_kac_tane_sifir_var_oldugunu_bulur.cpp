#include <stdio.h>

void bitgoster(unsigned int );
int sifirSay(unsigned int );

int main() {
	unsigned int k = 12, m = 7;
	bitgoster(k);
	printf("\n%d\n", sifirSay(k));
	bitgoster(m);
	printf("\n%d\n", sifirSay(m));
	return 0;
}

void bitgoster(unsigned int sayi) {
	unsigned int maske = 1 << 15;
	for(int i = 1 ; i <= 16 ; i++) {
		if(sayi & maske) {
			printf("1");
		} else {
			printf("0");
		}
		sayi <<= 1;
		if(i % 8 == 0) {
			printf(" ");
		}
	}
}

int sifirSay(unsigned int sayi) {
	int count = 0;
	while(sayi) {
		if(!(sayi & 1)) {
			count++;
		}
		sayi >>= 1;
	}
	return count;
}
