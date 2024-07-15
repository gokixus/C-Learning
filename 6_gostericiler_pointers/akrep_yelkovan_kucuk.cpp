#include <stdio.h>
#include <math.h>

float aradakiAcilariBul(int saat, int dakika, float *kucukAciPtr, float *buyukAciPtr) {
	*kucukAciPtr = saat*60*0.5;
	*buyukAciPtr = dakika*6;
	float toplamAci = abs(*kucukAciPtr - *buyukAciPtr);
	return toplamAci;
}

int main() {
	int saat = 3, dakika = 30;
	float kucukAci, buyukAci;
	float toplamAci = aradakiAcilariBul(saat, dakika, &kucukAci, &buyukAci);
	printf("Kucuk aci = %0.2f\nBuyuk aci = %0.2f\nToplam Aci = %0.2f", kucukAci, buyukAci, toplamAci);
	return 0;
}
