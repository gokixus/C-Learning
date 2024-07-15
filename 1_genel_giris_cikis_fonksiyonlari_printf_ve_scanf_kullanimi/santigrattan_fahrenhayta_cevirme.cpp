#include <stdio.h>

int main() {
	float sicaklik;
	printf("Santigrat cinsinden sicakligi giriniz: ");
	scanf("%f", &sicaklik);
	
	float formul = (180*sicaklik/100)+32;
	printf("\nFahrenhayt cinsinden sicaklik degeri: %0.2f Fahrenhayt", formul);
	return 0;
}
