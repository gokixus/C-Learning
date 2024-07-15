#include <stdio.h>

void harmanla(int *dizi1Ptr, int n1, int *dizi2Ptr, int n2, int *dizi3Ptr, int n3) {
	int i, j;
	for(i = 0; i < n1 ; i++) {
		dizi3Ptr[i*2] = dizi1Ptr[i];
		dizi3Ptr[i*2+1] = dizi2Ptr[i];
	}
}

int main() {
	int i, dizi1[5], dizi2[5], dizi3[10];
	printf("Birinci dizinin elemanlarini giriniz(5 adet): ");
	for(i = 0 ; i < 5 ; i++) {
		scanf("%d", &dizi1[i]);
	}
	printf("Ikinci dizinin elemanlarini giriniz(5 adet): ");
	for(i = 0 ; i < 5 ; i++) {
		scanf("%d", &dizi2[i]);
	}
	harmanla(dizi1, 5, dizi2, 5, dizi3, 10);
	printf("Harmanlanmis ucuncu dizi: ");
	for(i = 0 ; i < 10 ; i++) {
		printf("%d ", dizi3[i]);
	}
	return 0;
}
