#include <stdio.h>

#define MAX_OGRENCI 10

struct ogrenci {
	char ad[MAX_OGRENCI];
	char soyad[MAX_OGRENCI];
	float ort;
};

void ortalamaBuyuktenKucuge(struct ogrenci *, int);

int main() {
	int i;
	struct ogrenci ogrenciler[MAX_OGRENCI];
	for(i = 0 ; i < MAX_OGRENCI ; i++) {
		printf("%d. adi, soyadi, ortalamasini giriniz: ", i+1);
		scanf("%s%s%f", ogrenciler[i].ad, ogrenciler[i].soyad, &ogrenciler[i].ort);
	}
	ortalamaBuyuktenKucuge(ogrenciler, MAX_OGRENCI);
	printf("\nBuyukten Kucuge Not Ortalamasi Listesi:\n");
	for(i = 0 ; i < MAX_OGRENCI ; i++) {
		printf("%s %s %0.2f\n", ogrenciler[i].ad, ogrenciler[i].soyad, ogrenciler[i].ort);
	}
	return 0;
}

void ortalamaBuyuktenKucuge(struct ogrenci *arr, int n) {
	int i, j;
	struct ogrenci temp;
	for(i = 0; i < n-1; i++) {
		for(j = 0; j < n-i-1; j++) {
			if(arr[j].ort < arr[j+1].ort) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
