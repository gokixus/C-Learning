#include <stdio.h>

void sayiBul(float *dizi, int n, float *ortalamaPtr, int *ortalamadanBuyukEsitPtr, int *ortalamadanKucukPtr) {
	int i;
	float toplam = 0;
	for(i = 0 ; i < n ; i++) {
		toplam += dizi[i];
	}
	*ortalamaPtr = toplam / n;
	*ortalamadanBuyukEsitPtr = 0;
	*ortalamadanKucukPtr = 0;
	for(i = 0 ; i < n ; i++) {
		if(*ortalamaPtr <= dizi[i]) {
			(*ortalamadanBuyukEsitPtr)++;
		}
		if(*ortalamaPtr > dizi[i]) {
			(*ortalamadanKucukPtr)++;
		}
	}
}

int main() {
	int i;
	float dizi[10];
	printf("Dizi elemanlarini giriniz(10 adet): ");
	for(i = 0 ; i < 10 ; i++) {
		scanf("%f", &dizi[i]);
	}
	float ortalama;
	int ortalamadanBuyukEsit, ortalamadanKucuk;
	sayiBul(dizi, 10, &ortalama, &ortalamadanBuyukEsit, &ortalamadanKucuk);
	printf("\nOrtalama = %0.2f", ortalama);
	printf("\nOrtalamadan buyuk veya esit olanlar: %d", ortalamadanBuyukEsit);
	printf("\nOrtalamadan kucuk olanlar: %d", ortalamadanKucuk);
	return 0;
}
