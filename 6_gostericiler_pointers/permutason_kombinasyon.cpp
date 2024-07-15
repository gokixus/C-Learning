#include <stdio.h>

void permutasyonKombinasyon(int, int, double *, double *);

int main() {
	int n = 3 , r = 2;
	double p, c;
	permutasyonKombinasyon(n, r, &p, &c);
	printf("Permutasyon = %.1f\nKombinasyon = %.1f\n", p, c);
	return 0;
}

void permutasyonKombinasyon(int n, int r, double *p, double *c) {
	int i, nFact = 1, rFact = 1, n_rFact= 1;
	for(i = 1 ; i <= n ; i++) {
		nFact *= i;
	}
	for(i = 1 ; i <= r ; i++) {
		rFact *= i;
	}
	for(i = 1 ; i <= n-r ; i++) {
		n_rFact *= i;
	}
	
	*p = nFact / n_rFact;
	*c = *p / rFact;
}
