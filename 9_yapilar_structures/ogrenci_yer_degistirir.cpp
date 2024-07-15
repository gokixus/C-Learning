#include <stdio.h>

struct ogrenci {
	int sira;
	char ad[20];
	char soyad[20];
	float ort;
	char cinsiyet;
}a1, a2;

void takas(struct ogrenci *, struct ogrenci *);

int main() {
	a1 = (struct ogrenci){2, "Ahmet", "Gedik", 2.3, 'E'};
	a2 = (struct ogrenci){5, "Oya", "Turkali", 4.3, 'K'};
	printf("a1 = %d %s %s %0.1f %c\n", a1.sira, a1.ad, a1.soyad, a1.ort, a1.cinsiyet);
	printf("a2 = %d %s %s %0.1f %c", a2.sira, a2.ad, a2.soyad, a2.ort, a2.cinsiyet);
	
	takas(&a1, &a2);
	
	printf("\n\nYeni hali:\n");
	printf("a1 = %d %s %s %0.1f %c\n", a1.sira, a1.ad, a1.soyad, a1.ort, a1.cinsiyet);
	printf("a2 = %d %s %s %0.1f %c", a2.sira, a2.ad, a2.soyad, a2.ort, a2.cinsiyet);
	return 0;
}

void takas(struct ogrenci *o1, struct ogrenci *o2) {
	struct ogrenci temp;
	temp.sira = o1->sira;
	o1->sira = o2->sira;
	o2->sira = temp.sira;
	
	temp.ort = o1->ort;
	o1->ort = o2->ort;
	o2->ort = temp.ort;
}
