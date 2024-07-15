#include <stdio.h>
#include <math.h>

void ayir(double, char *, int *, double *);

int main() {
	double sayi;
	double ondalik;
	char isaret;
	int tam;
	
	printf("Ondalikli sayiyi giriniz: ");
	scanf("%lf", &sayi);
	
	ayir(sayi, &isaret, &tam, &ondalik);
	printf("%lf sayisinini analizi: \n", sayi);
	printf("Sayinin isareti: %c\n", isaret);
	printf("Sayinin tam kismi: %d\n", tam);
	printf("Sayinin ondalikli kismi: %lf\n", ondalik);
	
	return 0;
}

void ayir(double sayi, char *ip, int *tp, double *op) {
	double pozitifDeger;
	
	if(sayi > 0) {
		*ip = '+';
	}
	else {
		*ip = '-';
	}
	pozitifDeger = fabs(sayi);
	*tp = floor(pozitifDeger);
	*op = pozitifDeger - *tp;
}
