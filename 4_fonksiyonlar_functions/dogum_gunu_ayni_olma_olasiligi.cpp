#include <stdio.h>

double ihtimal(int kisi) {
	double olasilik = 1.0;
    int i;
    for (i = 1; i <= kisi; i++) {
        olasilik *= (367.0 - i) / 366.0;
    }
    return 1 - olasilik;
}

int main() {
	printf("\n%0.2f", ihtimal(20));
	printf("\n%0.2f", ihtimal(37));
	return 0 ;
}
