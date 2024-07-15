#include <stdio.h>

void notlariDuzenle(int [], int);

int main() {
	int notlar[20];
	int i;
	printf("Notlari giriniz(20 adet):\n");
	for(i = 0 ; i < 20 ; i++) {
		scanf("%d", &notlar[i]);
	}
	
	notlariDuzenle(notlar, 20);
	printf("\nDuzenlenmis notlar:\n");
	for(i = 0 ; i < 20 ; i++) {
		printf("%d\n", notlar[i]);
	}
	
	return 0;
}

void notlariDuzenle(int a[], int n) {
	int enBuyuk = 0;
	int i;
	for(i = 0; i < n ; i++) {
		if(a[i] > enBuyuk) {
			enBuyuk = a[i];
		}
	}
	
	float oran = 100/enBuyuk;
	for(i = 0 ; i < 20 ; i++) {
		a[i] = a[i]*oran;
	}
}
