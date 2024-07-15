#include <stdio.h>

struct kisi {
	char adi[25];
	char soyadi[25];
	int yas;
	char bolum[25];
}k1, k2;

int main() {
	printf("1. kisinin adi soyadi, yasi ve okudugu bolumunu giriniz: ");
	scanf("%s %s %d %s", k1.adi, k1.soyadi, &k1.yas, k1.bolum);
	printf("2. kisinin adi soyadi, yasi ve okudugu bolumunu giriniz: ");
	scanf("%s %s %d %s", k2.adi, k2.soyadi, &k2.yas, k2.bolum);
	FILE *dosya = fopen("kisi_bilgiler.txt", "w");
	if(dosya == NULL) {
		printf("Dosya olusturulamadi.\n");
		return 1;
	}
	fprintf(dosya, "Ad: %s\nSoyad: %s\nYas: %d\nBolumu: %s\n\n", k1.adi, k1.soyadi, k1.yas, k1.bolum);
	fprintf(dosya, "Ad: %s\nSoyad: %s\nYas: %d\nBolumu: %s\n\n", k2.adi, k2.soyadi, k2.yas, k2.bolum);
	fclose(dosya);
	printf("Dosya olusturuldu\n");
	return 0;
}
