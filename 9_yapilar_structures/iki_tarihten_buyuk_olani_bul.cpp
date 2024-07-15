#include <stdio.h>

struct tarih {
	int yil;
	int ay;
	int gun;
};

void buyukOlaniBul(struct tarih *, struct tarih *);

int main() {
	struct tarih t1;
	struct tarih t2;
	printf("1. tarihi giriniz: ");
	scanf("%d %d %d", &t1.gun, &t1.ay, &t1.yil);
	printf("2. tarihi giriniz: ");
	scanf("%d %d %d", &t2.gun, &t2.ay, &t2.yil);
	buyukOlaniBul(&t1, &t2);
	printf("Girilen iki tarihten daha ileri olan %02d/%02d/%02d dir", t1.gun, t1.ay, t1.yil);
	return 0;
}
void buyukOlaniBul(struct tarih *t1, struct tarih *t2) {
	struct tarih temp;
	if(t1->yil < t2->yil || (t1->yil == t2->yil && t1->ay < t2->ay) || (t1->yil == t2->yil && t1->ay == t2->ay && t1->gun < t2->gun)) {
		temp = *t1;
		*t1 = *t2;
		*t2 = temp;
	}
}
