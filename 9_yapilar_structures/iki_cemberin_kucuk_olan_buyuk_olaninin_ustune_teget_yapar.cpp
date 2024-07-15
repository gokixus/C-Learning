#include <stdio.h>
#include <math.h>

struct cember {
	float merkezx;
	float merkezy;
	float yaricap;
}c1, c2, kucuk, buyuk;

void tegetYap(struct cember *, struct cember *, struct cember *, struct cember *);

int main() {
	printf("Birincinin cember bilgilerini giriniz: ");
	scanf("%f %f %f", &c1.merkezx, &c1.merkezy, &c1.yaricap);
	printf("Ikincinin cember bilgilerini giriniz: ");
	scanf("%f %f %f", &c2.merkezx, &c2.merkezy, &c2.yaricap);
	tegetYap(&c1, &c2, &kucuk, &buyuk);
	printf("Kucuk olan teget yapildiktan sonra:\n");
	printf("Birinci cemberin bilgileri : %0.1f %0.1f %0.1f\n", buyuk.merkezx, buyuk.merkezy, buyuk.yaricap);
	printf("Ikinci cemberin bilgileri : %0.1f %0.1f %0.1f\n", kucuk.merkezx, kucuk.merkezy, kucuk.yaricap);
	return 0;
}

void tegetYap(struct cember *c1, struct cember *c2, struct cember *kucuk, struct cember *buyuk) {
	if(c1->yaricap > c2->yaricap) {
		*buyuk = *c1;
		*kucuk = *c2;
	} else {
		*buyuk = *c2;
		*kucuk = *c1;
	}
	float mesafe = sqrt(pow((buyuk->merkezx - kucuk->merkezx), 2) + pow((buyuk->merkezy - kucuk->merkezy), 2));
	float yaricapToplami = buyuk->yaricap + kucuk->yaricap;
	if(mesafe != yaricapToplami) {
		kucuk->merkezx = buyuk->merkezx;
		kucuk->merkezy = buyuk->merkezy + buyuk->yaricap + kucuk->yaricap;
	}
}
