#include <stdio.h>

struct zaman {
	int saat;
	int dakika;
	int saniye;
};

void zamanTopla(struct zaman *, struct zaman *);

int main() {
	struct zaman a1 = {23, 30, 20};
	struct zaman a2 = {1, 0, 40};
	zamanTopla(&a1, &a2);
	printf("Yeni zaman = %02d:%02d:%02d", a1.saat, a1.dakika, a1.saniye);
	return 0;
}

void zamanTopla(struct zaman *arr, struct zaman *temp) {
	arr->saniye += temp->saniye;
	if(arr->saniye >= 60) {
		arr->dakika += arr->saniye / 60;
		arr->saniye = arr->saniye % 60;
	}
	arr->dakika += temp->dakika;
	if(arr->dakika >= 60) {
		arr->saat += arr->dakika / 60;
		arr->dakika = arr->dakika % 60;
	}
	arr->saat += temp->saat;
	if(arr->saat >= 24) {
		arr->saat = arr->saat % 24;
	}
}
