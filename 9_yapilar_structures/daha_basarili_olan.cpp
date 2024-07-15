#include <stdio.h>

struct ogrenci {
	int no;
	float ortalama;
	int kredi;
	int girisYili;
}a1, a2, bas;

void basariliBul(struct ogrenci *, struct ogrenci *, struct ogrenci *);

int main() {
	struct ogrenci a1, a2, bas;
	printf("Birincinin no, ortalama, kredi toplami ve giris yili: ");
	scanf("%d %f %d %d", &a1.no, &a1.ortalama, &a1.kredi, &a1.girisYili);
	printf("Ikincinin no, ortalama, kredi toplami ve giris yili: ");
	scanf("%d %f %d %d", &a2.no, &a2.ortalama, &a2.kredi, &a2.girisYili);
	basariliBul(&a1, &a2, &bas);
	printf("Daha basarili olan %d numarali\n(Ortalama: %0.2f, Kredi Toplami: %d, Giris Yili: %d)", bas.no, bas.ortalama, bas.kredi, bas.girisYili);
	return 0;
}

void basariliBul(struct ogrenci *a1, struct ogrenci *a2, struct ogrenci *bas) {
	if(a1->ortalama > a2->ortalama || (a1->ortalama == a2->ortalama && a1->kredi < a2->kredi) || (a1->ortalama == a2->ortalama && a1->kredi == a2->kredi && a1->girisYili > a2->girisYili)) {
		*bas = *a1;
	} else {
		*bas = *a2;
	}
}
