#include <stdio.h>

#define N 5

int main() {
	int sayi[N][N] = {0};
	int m, p;
	
	for(m = 0; m < N ; m++) {
		sayi[m][0] = 1;
		sayi[m][m] = 1;
		for(p = 1 ; p < m ; p++) {
			sayi[m][p] = sayi[m-1][p-1] + sayi[m-1][p];
		}
	}
	for(m = 0 ; m < N ; m++) {
		for(p = 0 ; p <= m ; p++) {
			printf(" %d ", sayi[m][p]);
		}
		printf("\n");
	}
	
	return 0;
}
