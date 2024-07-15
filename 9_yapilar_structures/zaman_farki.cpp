#include <stdio.h>
#include <math.h>

struct zaman {
	int saat;
	int dakika;
	int saniye;
};

struct fark {
	int saat;
	int dakika;
	int saniye;
};

void zamanFarki(struct zaman *, struct zaman *, struct fark *);

int main() {
	struct zaman t1;
	struct zaman t2;
	struct fark fark;
	printf("Birinci zamani giriniz: ");
	scanf("%d%d%d", &t1.saat, &t1.dakika, &t1.saniye);
	printf("Ikinci zamani giriniz: ");
	scanf("%d%d%d", &t2.saat, &t2.dakika, &t2.saniye);
	zamanFarki(&t1, &t2, &fark);
	printf("Ikisi arasindaki fark: %d %d %d", fark.saat, fark.dakika, fark.saniye);
	return 0;
}

void zamanFarki(struct zaman *a1, struct zaman *a2, struct fark *f) {
	int saniye1 = a1->saat * 3600 + a1->dakika * 60 + a1->saniye;
    int saniye2 = a2->saat * 3600 + a2->dakika * 60 + a2->saniye;
    int farkSaniye = abs(saniye1 - saniye2);
    f->saat = farkSaniye / 3600;
    farkSaniye %= 3600;
    f->dakika = farkSaniye / 60;
    f->saniye = farkSaniye % 60;
}
