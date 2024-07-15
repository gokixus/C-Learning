#include <stdio.h>

int buyukBul(int pay1, int payda1, int pay2, int payda2, int *buyukPay_p, int *buyukPayda_p) {
	double kesir1 = (double)pay1 / payda1;
	double kesir2 = (double)pay2 / payda2;
	if(kesir1 > kesir2) {
		*buyukPay_p = pay1;
		*buyukPayda_p = payda1;
	}
	else {
		*buyukPay_p = pay2;
		*buyukPayda_p = payda2;
	}
}

int main() {
	int pay1 = 2, payda1 = 5, pay2 = 1, payda2 = 3;
	int buyukPay, buyukPayda;
	buyukBul(pay1, payda1, pay2, payda2, &buyukPay, &buyukPayda);
	printf("Buyuk = %d/%d", buyukPay, buyukPayda);
	return 0;
}
