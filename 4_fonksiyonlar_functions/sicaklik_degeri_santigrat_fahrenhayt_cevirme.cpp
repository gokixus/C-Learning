#include <stdio.h>

int cdenfye(int n) {
	return 9*n/5 + 32;
}

void fdencye(int ) {
	
}

int main() {
	int sicaklik;
	printf("Sicaklik degerini fahrenhayt'a cevirmek icin santigraf cinsinden sicaklik derecesi yaziniz : ");
	scanf("%d", &sicaklik);
	printf("\nF = %d", cdenfye(sicaklik));
	
	return 0;
}
