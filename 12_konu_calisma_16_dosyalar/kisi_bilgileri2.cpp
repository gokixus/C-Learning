#include <stdio.h>

struct kisi {
	char adi[25];
	char soyad[25];
	int yas;
	char bolum[25];
}k[3];

int main() {
	int i;
	for(int i = 0 ; i < 3 ; i++) {
		printf("%d. kisinin adi soyadi, yasi ve bolumunu giriniz: ", i+1);
		scanf("%s %s %d %s", k[i].adi, k[i].soyad, &k[i].yas, k[i].bolum);
	}
	FILE *dosya = fopen("kisi_bilgileri2.txt", "w");
	if(dosya == NULL) {
		printf("Dosya acilamadi\n");
		return 1;
	}
	for(int i = 0 ; i < 3 ; i++) {
		fprintf(dosya, "Ad: %s\nSoyadi: %s\nYasi: %d\nBolumu: %s\n\n", k[i].adi, k[i].soyad, k[i].yas, k[i].bolum);
	}
	fclose(dosya);
	printf("Dosya olusturuldu\n");
	return 0;
}
