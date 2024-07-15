#include <stdio.h>

struct zaman {
	int saat;
	int dakika;
	int saniye;
};

void zamanTopla(struct zaman *);

int main() {
	struct zaman t1;
	printf("Zamani giriniz: ");
	scanf("%d%*c%d%*c%d", &t1.saat, &t1.dakika, &t1.saniye);
	zamanTopla(&t1);
	printf("Yeni zaman: %02d/%02d/%02d", t1.saat, t1.dakika, t1.saniye);
}

void zamanTopla(struct zaman *arr) {
	arr->saniye = arr->saniye + 97;
	if(arr->saniye >= 60) {
		arr->dakika += arr->saniye / 60;
		arr->saniye = (arr->saniye) % 60; //yeni zamanin saniyesi 60ü geçmesi halinde//
		if(arr->dakika >= 60) {
			arr->saat += arr->dakika / 60;
			arr->dakika = arr->dakika % 60; //yeni zamanin dakikasi 60ü geçmesi halinde//
			arr->saat = arr->saat % 24; //yeni zamanin saati 24ü geçmesi halinde //
		}
	} 
}
