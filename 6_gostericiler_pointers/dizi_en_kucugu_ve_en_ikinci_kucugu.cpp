#include <stdio.h>
#include <limits.h>

void kucukleriBul(int *dizi, int n, int *enKucuk, int *min_i, int *enKucuk2, int *min2_i) {
	int i;
	*enKucuk = INT_MAX;
	*enKucuk2 = INT_MAX;
	for(i = 0 ; i < n ; i++) {
		if(dizi[i] < *enKucuk) {
			*enKucuk = dizi[i];
			*min_i = i;
		}
		else if(dizi[i] < *enKucuk2) {
			*enKucuk2 = dizi[i];
			*min2_i = i;
		}
	}
}

int main() {
	int dizi[10], i;
	printf("Dizi elemanlarini giriniz(10 adet): ");
	for(i = 0 ; i < 10 ; i++) {
		scanf("%d", &dizi[i]);
	}
	int enKucuk, min_i, enKucuk2, min2_i;
	kucukleriBul(dizi, 10, &enKucuk, &min_i, &enKucuk2, &min2_i);
	printf("\nEn kucuk eleman %d. nolu indiste bulunan %d", min_i, enKucuk);
	printf("\nEn kucuk ikinci eleman %d. nolu indiste bulunan %d", min2_i, enKucuk2);
	return 0;
}
