#include <stdio.h>

float kombinasyon(int, int);

int main() {
	int n, r;
	printf("n ve r degerlerini giriniz : ");
	scanf("%d%d", &n, &r);
	
	printf("C(%d, %d) = %0.1f", n, r, kombinasyon(n, r));
	
	return 0;
}

float kombinasyon(int n, int r) {
	float kombi_n = 1, kombi_r = 1, kombi_nr = 1;
	for(int i = n ; i > 1 ; i--) {
		kombi_n *= i;
	}
	for(int j = r ; j > 1 ; j--) {
		kombi_r *= j;
	}
	for(int t = n - r ; t > 1 ; t--) {
		kombi_nr *= t; 
	}
	return kombi_n/((kombi_nr)*kombi_r);
}
