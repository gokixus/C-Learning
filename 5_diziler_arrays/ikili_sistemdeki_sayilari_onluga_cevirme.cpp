#include <stdio.h>
#include <math.h>

int onlugaCevir(int a[], int n) {
	int onluk = 0;
	int i;
	for(i = n-1 ; i >= 0 ; i--) {
		onluk += a[i] * pow(2, n-1-i);
	}
	
	return onluk;
}

int main() {
	int eleman, i;
	printf("Ikili(binary) dizi icin eleman sayisi giriniz: ");
	scanf("%d", &eleman);
	
	int ikiliDizi[eleman];
	printf("Binary sayilarini(0 veya 1) giriniz(Toplam %d adet): ", eleman);
	for(i = 0 ; i < eleman ; i++) {
		scanf("%d", &ikiliDizi[i]);
	}
	
	printf("\nSonuc = %d", onlugaCevir(ikiliDizi, eleman));
}
