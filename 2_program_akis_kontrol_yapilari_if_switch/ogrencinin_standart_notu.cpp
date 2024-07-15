#include <stdio.h>

int main() {
	float basariN;
	float sinifOrt;
	float standartSap;
	
	printf("Basari notunuzu giriniz: ");
	scanf("%f", &basariN);
	printf("Sinif ortalamanizi giriniz: ");
	scanf("%f", &sinifOrt);
	printf("Standart sapmanizi giriniz: ");
	scanf("%f", &standartSap);
	
	float standartNot;
	standartNot = (basariN - sinifOrt) / standartSap;
	printf("\n\nStandart notunuz = %0.2f", standartNot);
	
	if(2<=standartNot) {
		printf("\nHarf notunuz = A");
	}
	if(1<=standartNot && standartNot<2) {
		printf("\nHarf notunuz = B");
	}
	if(0<=standartNot && standartNot<1) {
		printf("\nHarf notunuz = C");
	}
	if(standartNot<0) {
		printf("\nHarf notunuz = F");
	}
	return 0;
}
