#include <stdio.h>

int main() {
	int kare;
	printf("Kac adet kare girmek istiyorsunuz: ");
	scanf("%d", &kare);
	int uzunluk;
	printf("Ilk kare uzunlugunu giriniz lutfen(cm): ");
	scanf("%d", &uzunluk);
	float toplam_alan = uzunluk*uzunluk;
	for ( int i = 2 ; i<=kare ; i++) {
		uzunluk /= 2;
		toplam_alan += uzunluk*uzunluk;
	}
    printf("\nToplam Alan = %0.2f", toplam_alan);
	return 0;
}
