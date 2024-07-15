#include <stdio.h>

float en_buyuk(float sayi1, float sayi2, float sayi3) {
	if(sayi1 > sayi2 && sayi1 > sayi3) {
		return sayi1;
	}
	if(sayi1 > sayi3 && sayi3 > sayi2) {
		return sayi1;
	}
	if(sayi2 > sayi3 && sayi3 > sayi1) {
		return sayi2;
	}
	if(sayi2 > sayi1 && sayi1 > sayi3) {
		return sayi2;
	}
	if(sayi3 > sayi2 && sayi2 > sayi1) {
		return sayi3;
	}
	if(sayi3 > sayi1 && sayi1 > sayi3) {
		return sayi3;
	}
}

int main() {
	float sayi1, sayi2, sayi3;
	printf("3 farkli ondalikli sayi giriniz: ");
	scanf("%f%f%f", &sayi1, &sayi2, &sayi3);
	
	printf("En buyuk sayi = %0.2f", en_buyuk(sayi1, sayi2, sayi3));
}
