#include <stdio.h>

int haftaGunSaatBul(int, int *, int *, int *);

int main() {
	int sure;
	printf("Sureyi giriniz(saat): ");
	scanf("%d", &sure);
	
	int hafta, gun, saat;
	haftaGunSaatBul(sure, &hafta, &gun, &saat);
	
	printf("Girilen sure : %d Hafta, %d Gun, %d Saat eder", hafta, gun, saat);
	return 0;
}

int haftaGunSaatBul(int surePtr, int *a, int *b, int *c) {
	*a = (surePtr/24) / 7;
	*b = (surePtr/24) - (*a)*7;
	*c = surePtr % 24;
}
