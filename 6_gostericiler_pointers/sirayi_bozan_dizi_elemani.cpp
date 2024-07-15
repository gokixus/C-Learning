#include <stdio.h>

void ilkBozaniBul(int *dizi, int n, int *indisPtr, int *elemanPtr) {
	for(int i = 0 ; i < n-1 ; i++) {
		if(dizi[i] < dizi[i+1]) {
			*elemanPtr = dizi[i+1];
			*indisPtr = i+1;
			return;
		}
	}
}

int main() {
	int i, dizi[9];
	printf("Dizi elemanlarini giriniz(9 adet): ");
	for(i = 0 ; i < 9 ; i++) {
		scanf("%d", &dizi[i]);
	}
	int indis, eleman;
	ilkBozaniBul(dizi, 9, &indis, &eleman);
	printf("\nSirayi bozan ilk eleman: %d", eleman);
	printf("\nSirayi bozan ilk elemanin indisi: %d", indis);
	return 0;
}
