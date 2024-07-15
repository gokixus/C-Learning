#include <stdio.h>

typedef struct cember {
	float merkezx;
	float merkezy;
	float yaricap;
}cember;

void tegetYap(cember *, char);

int main() {
	cember c;
	char eksen;
	printf("Cember hangi eksen teget yapilacak? : ");
	scanf("%c", &eksen);
	printf("Cemberin bilgilerini giriniz(x, y, r): ");
	scanf("%f %f %f", &c.merkezx, &c.merkezy, &c.yaricap);
	tegetYap(&c, eksen);
	printf("Cemberin yeni merkezi: %0.1f %0.1f %0.1f", c.merkezx, c.merkezy, c.yaricap);
	return 0;
}

void tegetYap(cember *c, char eksen) {
	if(eksen == 'x') {
		c->merkezy = c->yaricap;
	} else if(eksen == 'y') {
		c->merkezx = c->yaricap;
	}
}
