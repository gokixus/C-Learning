#include <stdio.h>

int main() {
	float pi = 3.14;
	float yaricap;
	
	printf("Cemberin yaricapini giriniz(cm): ");
	scanf("%f", &yaricap);
	
	float sonuc = 2*pi*yaricap;
	printf("\nCemberin uzunlugu: %0.2f", sonuc);
	return 0;
}
