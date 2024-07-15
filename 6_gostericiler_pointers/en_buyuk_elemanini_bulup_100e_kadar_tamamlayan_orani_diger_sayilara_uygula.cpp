#include <stdio.h>

void arttir(int *dizi, int n) {
	int i, enBuyuk = 0;
	for(i = 0 ; i < n ; i++) {
		if(*(dizi + i) > enBuyuk) {
			enBuyuk = *(dizi + i);
		}
	}
	float oran = 100.0/enBuyuk;
	for(i = 0 ; i < n ; i++) {
		*(dizi + i) *= oran;
	}
}

int main() {
	int i, dizi[10];
	printf("Dizi elemanlarini giriniz(1-100): ");
	for(i = 0 ; i < 10 ; i++) {
		scanf("%d", &dizi[i]);
	}
	printf("\nDizinin ilk hali : ");
	for(i = 0 ; i < 10 ; i++) {
		printf("%d ", *(dizi + i));
	}
	arttir(dizi, 10);
	printf("\nDizinin son hali : ");
	for(i = 0 ; i < 10 ; i++) {
		printf("%d ", *(dizi + i));
	}
	return 0;
}
