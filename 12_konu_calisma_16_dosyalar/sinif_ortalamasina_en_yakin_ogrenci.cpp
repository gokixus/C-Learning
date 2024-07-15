#include <stdio.h>
#include <math.h>

struct Ogrenci {
	int no;
	int vize;
	int final;
};

int main() {
	float sinifOrtalama;
	printf("Ogrencilerin sinif ortalamasi: ");
	scanf("%f", &sinifOrtalama);
	FILE *dosya = fopen("ogrenci.txt", "r");
	if(dosya == NULL) {
		printf("Dosya acilamadi.\n");
		return 1;
	}
	
	struct Ogrenci ogrenci;
	struct Ogrenci enYakinOgrenci;
	float enYakinFark = 100.0;
	
	while(!feof(dosya)) {
		int okunan = fscanf(dosya, "No: %d\nVize: %d\nFinal: %d\n", &ogrenci.no, &ogrenci.vize, &ogrenci.final);
		float ogrenciOrtalama = (ogrenci.vize + ogrenci.final) / 2.0;
		float fark = fabs(ogrenciOrtalama - sinifOrtalama);
		if(okunan == 3 && fark < enYakinFark) {
			enYakinFark = fark;
			enYakinOgrenci = ogrenci;
		}
	}
	printf("\nEn yakin ogrenci:\n");
	printf("No: %ld\nVize: %d\nFinal: %d\n", enYakinOgrenci.no, enYakinOgrenci.vize, enYakinOgrenci.final);

	fclose(dosya);
	return 0;
}
