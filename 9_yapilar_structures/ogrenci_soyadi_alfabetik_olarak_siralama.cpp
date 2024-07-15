#include <stdio.h>
#include <string.h>

struct ogrenci {
	char ad[20];
	char soyad[20];
	float ort;
};

void soyadiAlfabetikSiralama(struct ogrenci *, int);

int main() {
	struct ogrenci ogrenciler[10];
	int i;
	for(i = 0 ; i < 10 ; i++) {
		printf("%d. adi, soyadi ve ortalamasini giriniz: ", i+1);
		scanf("%s%s%f", ogrenciler[i].ad, ogrenciler[i].soyad, &ogrenciler[i].ort);
	}
	soyadiAlfabetikSiralama(ogrenciler, 10);
	printf("\n-----LISTE-----\n");
	for(i = 0 ; i < 10 ; i++) {
		printf("%s %s %0.2f\n", ogrenciler[i].ad, ogrenciler[i].soyad, ogrenciler[i].ort);
	}
	return 0;
}

void soyadiAlfabetikSiralama(struct ogrenci *arr, int n) {
	int i, j;
	struct ogrenci temp;
	for(i = 0 ; i < n ; i++) {
		for(j = i ; j < n ; j++) {
			if(strcmp(arr[i].soyad, arr[j].soyad) > 0) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
