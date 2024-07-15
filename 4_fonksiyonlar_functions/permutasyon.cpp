#include <stdio.h>

void permutasyon(int, int);

void permutasyon(int n, int r) {
	int nFaktoriyel = 1;
	for(int i = n ; i > 1 ; i--) {
		nFaktoriyel *= i; 
	}
	int rFaktoriyel = 1;
	for(int j = n - r ; j > 1 ; j--) {
		rFaktoriyel *= j;
	}
	printf("P(n, r) : %d", nFaktoriyel/rFaktoriyel);
}

int main() {
	int sayi1, sayi2;
	printf("n ve r degerlerini giriniz : ");
	scanf("%d%d", &sayi1, &sayi2);
	
	permutasyon(sayi1, sayi2);
	
	return 0;
}


