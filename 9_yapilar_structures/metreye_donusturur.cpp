#include <stdio.h>

struct uzunluk {
	float miktar;
	char cins[2];
}a;

void metreYap(struct uzunluk *);

int main() {
	printf("Uzunluk miktar ve cinsini giriniz: ");
	scanf("%f%s", &a.miktar, &a.cins);
	metreYap(&a);
	printf("Metreye donusturdukten sonra: %0.2f %s", a.miktar, a.cins);
	return 0;
}

void metreYap(struct uzunluk *a) {
	if(a->cins[0] == 'm') {
		a->miktar = a->miktar/1000;
	}
	if(a->cins[0] == 'c') {
		a->miktar = a->miktar/100;
	}
	if(a->cins[0] == 'k') {
		a->miktar = a->miktar*1000;
	}
	a->cins[0] = 'm';
	a->cins[1] = '\0';
}
