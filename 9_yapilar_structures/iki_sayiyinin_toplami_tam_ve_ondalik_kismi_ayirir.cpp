#include <stdio.h>
#include <math.h>

struct ondalik {
	char isaret;
	int tamKismi;
	int ondalikKismi;
};

void floatToplam(float, float, struct ondalik *);

int main() {
	float s1 = -987.6543, s2 = 12.34;
	struct ondalik sonuc;
	floatToplam(s1, s2, &sonuc);
	printf("Sonucun tam kismi : %d\n", sonuc.tamKismi);
	printf("Sonucun ondalik kismi : %d\n", sonuc.ondalikKismi);
	printf("Sonucun isaret kismi : %c\n", sonuc.isaret);
	return 0;
}

void floatToplam(float s1, float s2, struct ondalik *sonuc) {
	float toplam = s1 + s2;
	if(toplam < 0) {
		sonuc->isaret = '-';
	} else {
		sonuc->isaret = '+';
	}
	sonuc->tamKismi = (int)fabs(toplam);
	sonuc->ondalikKismi = (int)((fabs(toplam) - sonuc->tamKismi) * 1000);  // 3 basamaklý ondalýk kýsmý alýyoruz
}

