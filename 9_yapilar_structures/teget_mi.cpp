#include <stdio.h>
#include <math.h>

struct cember {
	float merkezx;
	float merkezy;
	float yaricap;
}c1, c2;

int tegetMi(struct cember *, struct cember *);

int main() {
	struct cember *a[2] = {&c1, &c2};
	for(int i = 0 ; i < 2 ; i++) {
		printf("%d. cemberin bilgilerini giriniz: ", i+1);
		scanf("%f %f %f", &(a[i]->merkezx), &(a[i]->merkezy), &(a[i]->yaricap));
	}
	int c = tegetMi(a[0], a[1]);
	if(c == 1) {
		printf("Cemberler birbirine tegettir.\n");
	} else {
		printf("Cemberler birbirine teget degildir.\n");
	}
	return 0;
}

int tegetMi(struct cember *c1, struct cember *c2) {
	float mesafe = sqrt(pow((c1->merkezx - c2->merkezx), 2) + pow((c1->merkezy - c2->merkezy), 2));
	float yaricapToplami = c1->yaricap + c2->yaricap;

	if(mesafe == yaricapToplami) {
		return 1; // Çemberler birbirine teðettir.
	} else {
		return 0; // Çemberler birbirine teðet deðildir.
	}
}
