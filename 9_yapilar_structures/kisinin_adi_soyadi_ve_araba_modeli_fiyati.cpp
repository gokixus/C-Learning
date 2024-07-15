#include <stdio.h>

struct kisi {
	char ad[25];
	char soyad[25];
	int yas;
};

struct araba {
	char model[25];
	float fiyat;
};

int main() {
	struct kisi k;
	struct araba a;
	
	printf("Kisinin adi soyadi ve yasi: ");
	scanf("%s %s %d", k.ad, k.soyad, &k.yas);
	printf("Arabanin modeli ve fiyati: ");
	scanf("%s %f", a.model, &a.fiyat);
	
	printf("\n %s %s 'in %s model arabasinin fiyati %0.2f'dir.", k.ad, k.soyad, a.model, a.fiyat);
	return 0;
}
