#include <stdio.h>
#include <math.h>

int onlukYap(int a[], int n) {
	int sonuc = 0;
	for(int i = 0 ; i < n ; i++) {
		sonuc += a[i] * pow(8, n-i-1);
	}
	return sonuc;
}

int main() {
	int dizi[10];
	printf("Sekizlik sayinin rakamlarini giriniz(0-7): ");
	for(int i = 0 ; i < 10 ; i++) {
		scanf("%d", &dizi[i]);
	}
	
	int sonuc = onlukYap(dizi, 10);
	printf("Onluk karsiligi: %d", sonuc);
	return 0;
}
