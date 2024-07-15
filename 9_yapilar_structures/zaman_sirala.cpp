#include <stdio.h>

struct zaman {
	int saat;
	int dakika;
	int saniye;
};

void zamanSirala(struct zaman *, struct zaman *);

int main() {
	struct zaman a1 = {1, 41, 41};
	struct zaman a2 = {1, 41, 40};
	zamanSirala(&a1, &a2);
	printf("Yeni zaman : %02d:%02d:%02d\n", a1.saat, a1.dakika, a1.saniye);
	printf("Yeni zaman : %02d:%02d:%02d\n", a2.saat, a2.dakika, a2.saniye);
	return 0;
}

void zamanSirala(struct zaman *a1, struct zaman *a2) {
	struct zaman temp;
	if(a1->saat > a2->saat || (a1->saat == a2->saat && a1->dakika > a2->dakika) || (a1->saat == a2->saat && a1->dakika == a2->dakika && a1->saniye > a2->saniye)) {
		temp = *a1;
		*a1 = *a2;
		*a2 = temp;
	}
}
