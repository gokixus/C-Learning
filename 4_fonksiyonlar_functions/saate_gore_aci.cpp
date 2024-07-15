#include <stdio.h>
#include <math.h>

int kucukAci(int, int);

int main() {
	printf("%d", kucukAci(3, 0));
}

int kucukAci(int saat, int dakika) {
	int akrep_derecesi = saat*60*0.5;
	int yelkovan_derecesi = dakika*6;
	if(yelkovan_derecesi > akrep_derecesi) {
		return 360 - fabs(akrep_derecesi - yelkovan_derecesi);
	}
	else {
		return fabs(akrep_derecesi - yelkovan_derecesi);
	}

}
