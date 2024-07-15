#include <stdio.h>
#include <string.h>

struct sirket {
	char isim[20];
	int sermaye;
	float pazarPayi;
}s1, s2;

void birlestir(struct sirket *, struct sirket *, struct sirket *);

int main() {
	struct sirket birlestirilmis;
	printf("Birinci sirketin isim, sermaye ve pazar payini giriniz:\n");
	scanf("%s%d%f", s1.isim, &s1.sermaye, &s1.pazarPayi);
	printf("Ikimci sirketin isim, sermaye ve pazar payini giriniz:\n");
	scanf("%s%d%f", s2.isim, &s2.sermaye, &s2.pazarPayi);
	birlestir(&s1, &s2, &birlestirilmis);
	printf("\nBirlesimden ortaya cikan sirketin\nIsmi, sermayesi ve pazar payi : %s, %d, %0.2f",
	birlestirilmis.isim, birlestirilmis.sermaye, birlestirilmis.pazarPayi);
	return 0;
}

void birlestir(struct sirket *s1, struct sirket *s2, struct sirket *birl) {
	if(s1->sermaye > s2->sermaye) {
		strcpy(birl->isim, s1->isim);
	} else {
		strcpy(birl->isim, s2->isim);
	}
	birl->sermaye = s1->sermaye + s2->sermaye;
	birl->pazarPayi = s1->pazarPayi + s2->pazarPayi;
}
