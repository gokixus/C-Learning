#include <stdio.h>
#include <math.h>

struct ddortgen {
	float solUstX;
	float solUstY;
	float sagAltX;
	float sagAltY;
}ilk, sonra;

void merkezeAl(struct ddortgen *, struct ddortgen *);

int main() {
	printf("Dikdortgenin bilgilerini giriniz\n(sol ust x, sol ust y, sag alt x, sag alt y) : ");
	scanf("%f%f%f%f", &ilk.solUstX, &ilk.solUstY, &ilk.sagAltX, &ilk.sagAltY);
	merkezeAl(&ilk, &sonra);
	printf("Agirlik merkezi orijin olduktan sonraki degerleri\n(sol ust x, sol ust y, sag alt x, sag alt y) : ");
	printf("%0.1f %0.1f %0.1f %0.1f", sonra.solUstX, sonra.solUstY, sonra.sagAltX, sonra.sagAltY);
	return 0;
}

void merkezeAl(struct ddortgen *ilk, struct ddortgen *sonra) {
	float merkezX = (ilk->solUstX + ilk->sagAltX) / 2;
	float merkezY = (ilk->solUstY + ilk->sagAltY) / 2;

	sonra->solUstX = ilk->solUstX - merkezX;
	sonra->solUstY = ilk->solUstY - merkezY;
	sonra->sagAltX = ilk->sagAltX - merkezX;
	sonra->sagAltY = ilk->sagAltY - merkezY;
}
