#include <stdio.h>
#include <math.h>

float alan(int, int);

int main() {
	int boy, kilo;
	printf("Boyunuzu ve kilonuzu giriniz: ");
	scanf("%d%d", &boy, &kilo);
	printf("Beden alaniniz = %0.2f metrekaredir.", alan(boy, kilo));
}

float alan(int boy, int kilo) {
	float bsa = pow(boy, 0.725)*pow(kilo, 0.425)*71.84*pow(10, -4);
	return bsa;
}
