#include <stdio.h>

struct tarih {
	int gun;
	int ay;
	int yil;
}a;

unsigned int paketle(struct tarih *);

int main() {
	printf("Tarih giriniz(GG.AA.YY): ");
	scanf("%d%*c%d%*c%d", &a.gun, &a.ay, &a.yil);
	printf("\nSayisal deger : %u", paketle(&a));
}

unsigned int paketle(struct tarih *a) {
	unsigned int paketlenmis_tarih = 0;
    paketlenmis_tarih |= (a->gun & 0x1F); // ilk 5 bit gun
    paketlenmis_tarih |= ((a->ay & 0x0F) << 5); // sonraki 4 bit ay
    paketlenmis_tarih |= ((a->yil % 100) << 9); // sonrakiler yil
    return paketlenmis_tarih;
}
