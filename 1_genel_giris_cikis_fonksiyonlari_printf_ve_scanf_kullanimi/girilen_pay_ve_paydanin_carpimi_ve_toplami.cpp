#include <stdio.h>

int main() {
	float birPay, birPayda;
	float ikiPay, ikiPayda;
	
	printf("Birinci ifadenin payini giriniz: ");
	scanf("%f", &birPay);
	printf("Birinci ifadenin paydasini giriniz: ");
	scanf("%f", &birPayda);
	printf("Ikinci ifadenin payini giriniz: ");
	scanf("%f", &ikiPay);
	printf("Ikinci ifadenin payini giriniz: ");
	scanf("%f", &ikiPayda);
	
	float carpim = (birPay*ikiPay) / (birPayda*ikiPayda);
	printf("\n\nGirilen sayilarin carpimi %f", carpim);
	float toplam = (birPay/birPayda)+(ikiPay/ikiPayda);
	printf("\nGirilen sayilarin toplami %f", toplam);
	return 0;
}
