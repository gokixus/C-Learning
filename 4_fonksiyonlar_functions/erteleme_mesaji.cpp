#include <stdio.h>

void ertelemeMesajiYaz(int secim) {
	if(secim == 1 || secim == 2 || secim == 12) {
		printf("Yazin tatile gidecegiz");
	}
	else if(secim == 3 || secim == 4 || secim == 5) {
		printf("Sonbaharda tatile gidecegiz");
	}
	else if(secim == 6 || secim == 7 || secim == 8) {
		printf("Kisin tatile gidecegiz");
	}
	else if(secim == 9 || secim == 10 || secim == 11) {
		printf("Ilkbaharda tatile gidecegiz");
	}
}

int main() {
	int secim;
	printf("Tatile ne zaman gidiyoruz ? : ");
	scanf("%d", &secim);
	
	ertelemeMesajiYaz(secim);
	
	return 0;
	
}
