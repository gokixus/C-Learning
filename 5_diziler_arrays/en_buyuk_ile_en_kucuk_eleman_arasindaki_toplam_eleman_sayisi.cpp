#include <stdio.h>
#include <math.h>

int enbEnkArasiUzaklik(float [], int);

int main() {
	float dizi[50];
	int i;
	int bilye;
	
	printf("Kac adet bilye capi gireceksiniz: ");
	scanf("%d", &bilye);
	if(bilye > 50) {
		printf("Yanlis!!! en fazla 50 girebilirisiniz.\n");
		printf("Kac adet bilye capi gireceksiniz: ");
		scanf("%d", &bilye);
	}
	
	printf("%d tane bilye capi giriniz: ", bilye);
	for(i = 0 ; i <= bilye-1 ; i++) {
		scanf("%f", &dizi[i]);
	}
	
	printf("En buyuk ile en kucuk arasinda %d adet bilye vardir.", enbEnkArasiUzaklik(dizi, bilye));
	return 0;
}

int enbEnkArasiUzaklik(float a[], int n) {
	float enBuyuk = a[0];
	float enKucuk = a[0];
	int enKucuk_index = 0;
	int enBuyuk_index = 0;
	int i;
	
	for(i = 0 ; i <= n-1 ; i++) {
		if(a[i] > enBuyuk) {
			enBuyuk = a[i];
			enBuyuk_index = i;
		}
		if(a[i] < enKucuk) {
			enKucuk = a[i];
			enKucuk_index = i;
		}
	}
	return abs(enBuyuk_index - enKucuk_index) - 1;
}
