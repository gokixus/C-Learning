#include <stdio.h>

int main() {
	float sayi1, sayi2;
	printf("1. sayi giriniz: ");
	scanf("%f", &sayi1);
	printf("2. sayi giriniz: ");
	scanf("%f", &sayi2);
	
	float harmonik_ort = (2*sayi1*sayi2)/(sayi1+sayi2);
	printf("Girilen %0.2f ve %0.2f sayilarin harmonik ortalamasi %0.2f dir", sayi1, sayi2, harmonik_ort);
	return 0;
}
