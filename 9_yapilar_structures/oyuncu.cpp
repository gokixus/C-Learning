#include <stdio.h>

struct oyuncu {
	char ad[20];
	int can;
	float kuvvet;
};

struct oyuncu hangisiDahaKuvvetli(struct oyuncu, struct oyuncu);
void yazdir(struct oyuncu);
void kuvvetiArttir(struct oyuncu *, float miktar);

int main() {
	struct oyuncu a = {"Otto", 3, 0.7};
	struct oyuncu b = {"Botto", 4, 4.6};
	struct oyuncu c;
	kuvvetiArttir(&a, 1.0);
	c = hangisiDahaKuvvetli(a, b);
	yazdir(c);
}

struct oyuncu hangisiDahaKuvvetli(struct oyuncu o1, struct oyuncu o2) {
	if(o1.kuvvet > o2.kuvvet) {
		return o1;
	} else {
		return o2;
	}
}

void yazdir(struct oyuncu o) {
	printf("Oyuncu Adi: %s\n", o.ad);
	printf("Can: %d\n", o.can);
	printf("Kuvvet: %.2f\n", o.kuvvet);
}

void kuvvetiArttir(struct oyuncu *o, float miktar) {
	o->kuvvet += miktar;
}

