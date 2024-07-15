#include <stdio.h>

void topla(int *dizi1, int *dizi2, int *dizi3, int n3) {
	for(int i = 0 ; i < n3 ; i++) {
		dizi3[i] = dizi1[i] + dizi2[i];
	}
}

int main() {
	int i, dizi1[5], dizi2[5];
	printf("1. Dizinin elemanlarini giriniz(5 adet): ");
	for(i = 0 ; i < 5 ; i++) {
		scanf("%d", &dizi1[i]);
	}
	printf("2. Dizinin elemanlarini giriniz(5 adet): ");
	for(i = 0 ; i < 5 ; i++) {
		scanf("%d", &dizi2[i]);
	}
	int dizi3[5];
	topla(dizi1, dizi2, dizi3, 5);
	printf("\n3. Dizi : ");
	for(i = 0 ; i < 5 ; i++) {
		printf("%d ", dizi3[i]);
	}
	return 0;
}
