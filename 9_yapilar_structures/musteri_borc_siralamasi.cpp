#include <stdio.h>

struct musteri {
	int sira;
	char adsoyad[50];
	char telefon[15];
	float borc;
	char cinsiyet;
}a1, a2, a3;

void sirala(struct musteri *, struct musteri *, struct musteri *);

int main() {
	a1 = (struct musteri){2, "Ahmet Terk", "2541", 12.5, 'E'};
	a2 = (struct musteri){5, "Oya Git", "1425", 4.3, 'K'};
	a3 = (struct musteri){5, "Selim Demir", "4568", 18.3, 'E'};
	sirala(&a1, &a2, &a3);
	printf("Borc siralamasi(yuksekten dusuge):\n");
	printf("%d %s %s %0.1f %c\n", a1.sira, a1.adsoyad, a1.telefon, a1.borc, a1.cinsiyet);
	printf("%d %s %s %0.1f %c\n", a2.sira, a2.adsoyad, a2.telefon, a2.borc, a2.cinsiyet);
	printf("%d %s %s %0.1f %c\n", a3.sira, a3.adsoyad, a3.telefon, a3.borc, a3.cinsiyet);
	return 0;
}

void sirala(struct musteri *m1, struct musteri *m2, struct musteri *m3) {
	struct musteri temp;
	if(m1->borc < m2->borc) {
		temp = *m1;
		*m1 = *m2;
		*m2 = temp;
	}
	if(m1->borc < m3->borc) {
		temp = *m1;
		*m1 = *m3;
		*m3 = temp;
	}
	if(m2->borc < m3->borc) {
		temp = *m2;
		*m2 = *m3;
		*m3 = temp;
	}
}
