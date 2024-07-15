#include <stdio.h>

struct ddortgen {
	float solUstX;
	float solUstY;
	float sagAltX;
	float sagAltY;
}d;

void dondur90(struct ddortgen *);

int main() {
	printf("Dikdortgenin bilgilerini giriniz\n(sol ust x, sol ust y, sag alt x, sag alt y): ");
	scanf("%f%f%f%f", &d.solUstX, &d.solUstY, &d.sagAltX, &d.sagAltY);
	dondur90(&d);
	printf("\nAgirlik merkezinin etrafinda saat yonunde 90 derece dondukten sonraki degerleri\n");
	printf("(sol ust x, y ve sag alt x, y) : %0.1f, %0.1f ve %0.1f, %0.1f", d.solUstX, d.solUstY, d.sagAltX, d.sagAltY);
	return 0;
}

void dondur90(struct ddortgen *d) {
	float ortaX = (d->solUstX + d->sagAltX) / 2;
	float ortaY = (d->solUstY + d->sagAltY) / 2;

	float yeniSolUstX = ortaX - (d->solUstY - ortaY);
	float yeniSolUstY = ortaY + (d->solUstX - ortaX);

	float yeniSagAltX = ortaX - (d->sagAltY - ortaY);
	float yeniSagAltY = ortaY + (d->sagAltX - ortaX);

	d->solUstX = yeniSolUstX;
	d->solUstY = yeniSolUstY;
	d->sagAltX = yeniSagAltX;
	d->sagAltY = yeniSagAltY;
}
