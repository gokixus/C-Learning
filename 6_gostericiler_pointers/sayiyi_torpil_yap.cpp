#include <stdio.h>

void torpilYap(int *dizi, int n, int indis1, int indis2) {
	int temp = dizi[indis1];
	for(int i = indis1 ; i > indis2 ; i--) {
		dizi[i] = dizi[i-1];
	}
	dizi[indis2] = temp;
	
	
}

int main() {
	int i, dizi[9];
	printf("Dizi elemanlarini giriniz(9 adet): ");
	for(i = 1 ; i < 10 ; i++) {
		scanf("%d", &dizi[i]);
	}
	torpilYap(dizi, 9, 8, 2);
	for(i = 1 ; i < 10 ; i++) {
		printf("%d ", dizi[i]);
	}
}
