#include <stdio.h>

struct tarih{
	int gun;
	int ay;
	int yil;
};
int main() {
	struct tarih t1;
	struct tarih t2;
	struct tarih buyuk;
	printf("Ilk tarihi giriniz: ");
	scanf("%d%d%d", &t1.gun, &t1.ay, &t1.yil);
	printf("Ikinci tarihi giriniz: ");
	scanf("%d%d%d", &t2.gun, &t2.ay, &t2.yil);
	buyuk = t2;
	if(t1.yil > t2.yil) {
		buyuk = t1;
	}
	else if((t1. yil == t2.yil) && (t1.ay > t2.ay)) {
		buyuk = t1;
	}
	else if((t1.yil == t2.yil) && (t1.ay == t2.ay) && (t1.gun > t2.gun)) {
		buyuk = t1;
	}
	printf("Ileride olan tarih = %d/%d/%d", buyuk.gun, buyuk.ay, buyuk.yil);
	return 0;
}
