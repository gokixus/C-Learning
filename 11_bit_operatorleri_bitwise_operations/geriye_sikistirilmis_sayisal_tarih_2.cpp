#include <stdio.h>

struct tarih {
	int gun;
	int ay;
	int yil;
}a;

struct tarih paketiAc(unsigned int);

int main() {
	unsigned int paketli;
	printf("Sayisal degeri giriniz: ");
	scanf("%u", &paketli);
	paketiAc(paketli);
	printf("%d.%d.%d", a.gun, a.ay, a.yil + 1900);
	return 0;
}

struct tarih paketiAc(unsigned int paketli) {
	a.gun = paketli & 0x1F; // ilk 5 bit gun
    a.ay = (paketli >> 5) & 0x0F; // sonraki 4 bit ay
    a.yil = (paketli >> 9); // sonrakiler yil
    return a;
}
