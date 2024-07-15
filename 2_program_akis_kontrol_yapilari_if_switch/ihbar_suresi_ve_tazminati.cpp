#include <stdio.h>

int main() {
	int ay;
	printf("Toplam calisma surenizi giriniz(ay): ");
	scanf("%d", &ay);
	
	int aylikUcret;
	printf("Aylik ucretinizi giriniz(TL): ");
	scanf("%d", &aylikUcret);
	
	int ihbarSuresi;
	int ihbarTazminati;
	
	if(ay<=6) {
		ihbarSuresi = 14;
		ihbarTazminati = (aylikUcret/30)*14;
		printf("\nIhbar sureniz: %d gun", ihbarSuresi);
		printf("\nIhbar tazminatiniz: %d TL", ihbarTazminati);
	}
	if(6<ay && ay<=18) {
		ihbarSuresi = 28;
		ihbarTazminati = (aylikUcret/30)*28;
		printf("\nIhbar sureniz: %d gun", ihbarSuresi);
		printf("\nIhbar tazminatiniz: %d TL", ihbarTazminati);
	}
	if(18<ay && ay<=36) {
		ihbarSuresi = 42;
		ihbarTazminati = (aylikUcret/30)*42;
		printf("\nIhbar sureniz: %d gun", ihbarSuresi);
		printf("\nIhbar tazminatiniz: %d TL", ihbarTazminati);
	}
	if(36<ay) {
		ihbarSuresi = 56;
		ihbarTazminati = (aylikUcret/30)*56;
		printf("\nIhbar sureniz: %d gun", ihbarSuresi);
		printf("\nIhbar tazminatiniz: %d TL", ihbarTazminati);
	}
	return 0;
}
