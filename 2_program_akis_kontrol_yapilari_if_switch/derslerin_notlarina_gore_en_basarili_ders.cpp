#include <stdio.h>

int main() {
	float basari1, basari2, basari3, sinifOrt1, sinifOrt2, sinifOrt3, sapma1, sapma2, sapma3;
	printf("Birinci dersin basari notu, sinif ortalamasi ve sapmayi giriniz: ");
	scanf("%f%f%f", &basari1, &sinifOrt1, &sapma1);
	printf("Ikinci dersin basari notu, sinif ortalamasi ve sapmayi giriniz: ");
	scanf("%f%f%f", &basari2, &sinifOrt2, &sapma2);
	printf("Ucuncu dersin basari notu, sinif ortalamasi ve sapmayi giriniz: ");
	scanf("%f%f%f", &basari3, &sinifOrt3, &sapma3);
	
	float standartNot1 = (basari1-sinifOrt1) / sapma1;
	float standartNot2 = (basari2-sinifOrt2) / sapma2;
	float standartNot3 = (basari3-sinifOrt3) / sapma3;
	
	if(standartNot1>standartNot2 && standartNot2>standartNot3)
	    printf("\nEn basarili olunan ders 1. derstir.\n(Standart not = %0.2f)", standartNot1);
	if(standartNot1>standartNot3 && standartNot3>standartNot2)
	    printf("\nEn basarili olunan ders 1. derstir.\n(Standart not = %0.2f)", standartNot1);
	if(standartNot2>standartNot1 && standartNot1>standartNot3)
	    printf("\nEn basarili olunan ders 2. derstir.\n(Standart not = %0.2f)", standartNot2);
	if(standartNot2>standartNot3 && standartNot3>standartNot1)
	    printf("\nEn basarili olunan ders 2. derstir.\n(Standart not = %0.2f)", standartNot2);
	if(standartNot3>standartNot1 && standartNot1>standartNot2)
	    printf("\nEn basarili olunan ders 3. derstir.\n(Standart not = %0.2f)", standartNot3);
	if(standartNot3>standartNot2 && standartNot2>standartNot1)
	    printf("\nEn basarili olunan ders 3. derstir.\n(Standart not = %0.2f)", standartNot3);
	
	return 0;
}
