#include <stdio.h>

int hammingUzakligi(int a1[], int a2[], int n) {
	int i, adet = 0;
	for(i = 0 ; i < n ; i++) {
		if(a1[i] != a2[i]) {
			adet++;
		}
	}
	return adet;
}

int main() {
	int dizi1[10], dizi2[10], i, eleman;
	printf("Dizi eleman sayisini giriniz(en fazla 10): ");
	scanf("%d", &eleman);
	
	printf("Birinci dizinin elemanlarini giriniz: ");
	for(i = 0 ; i < eleman ; i++) {
		scanf("%d", &dizi1[i]);
	}
	printf("Ikinci dizinin elemanlarini giriniz: ");
	for(i = 0 ; i < eleman ; i++) {
		scanf("%d", &dizi2[i]);
	}
	
	printf("Hamming uzakligi = %d", hammingUzakligi(dizi1, dizi2, eleman));
	return 0;
}
