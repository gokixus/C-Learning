#include <stdio.h>

int main() {
	FILE *pOku1 = fopen("8A.txt", "r");
	FILE *pOku2 = fopen("8B.txt", "r");
	FILE *pYazdir = fopen("iyiler.txt", "w");
	if(!pOku1 || !pOku2 || !pYazdir) {
		perror("Dosya acilamadi veya olusturulamadi.\n");
		return 1;
	}
	
	char ad[15], soyad[15];
	float puan, toplamPuan = 0;
	int toplamOgrenci = 0;
	while(fscanf(pOku1, "%s %s %f", ad, soyad, &puan) != EOF) {
		toplamPuan += puan;
		toplamOgrenci++;
	}
	while(fscanf(pOku2, "%s %s %f", ad, soyad, &puan) != EOF) {
		toplamPuan += puan;
		toplamOgrenci++;
	}
	
	rewind(pOku1);
	rewind(pOku2);
	float ortalamaPuan = (float)toplamPuan/toplamOgrenci;
	fprintf(pYazdir, "Ortalama: %0.2f\n\n", ortalamaPuan);
	while(fscanf(pOku1, "%s %s %f", ad, soyad, &puan) != EOF) {
		if(ortalamaPuan < puan) {
			fprintf(pYazdir, "%s %s %0.2f\n", ad, soyad, puan);
		}
	}
	while(fscanf(pOku2, "%s %s %f", ad, soyad, &puan) != EOF) {
		if(ortalamaPuan < puan) {
			fprintf(pYazdir, "%s %s %0.2f\n", ad, soyad, puan);
		}
	}
	
	fclose(pOku1);
	fclose(pOku2);
	fclose(pYazdir);
	printf("Dosyalar olusturuldu.\n");
	return 0;
}
