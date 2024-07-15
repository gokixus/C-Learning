#include <stdio.h>
#include <math.h>

int kuvvet(int, int);

int main() {
	int taban, us;
	printf("Taban ve us degerlerini giriniz : ");
	scanf("%d%d", &taban, &us);
	
	printf("\n%d^%d = %d", taban, us, kuvvet(taban, us));
	return 0;
}

int kuvvet(int taban, int us) {
	return pow(taban, us);
}
