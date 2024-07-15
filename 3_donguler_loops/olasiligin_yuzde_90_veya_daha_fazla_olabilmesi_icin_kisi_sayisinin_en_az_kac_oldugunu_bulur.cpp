#include <stdio.h>

int main() {
	double olasilik = 1.0;
	int kisi = 0;
	while(olasilik > 0.10) {
		olasilik *= (365.0 - kisi)/366;
		kisi++;
	}
	printf("Kisi sayisi en az %d olmalidir.", kisi);
	return 0;
}
