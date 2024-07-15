#include <stdio.h>
#include <string.h>

struct ogrenciler {
	char ad[20];
	char soyad[20];
	int no;
	int devamsizlik;
}ogrenci[10];

int main() {
	FILE *pOku = fopen("devamlar.txt", "r");
	FILE *pYazdir = fopen("siralilar.txt", "w");
	if(!pOku || !pYazdir) {
		perror("Dosya olusturulamadi veya acilamadi.\n");
		return 1;
	}
	
	int toplamOgrenci = 0;
	while(fscanf(pOku, "%d %s %s %d", &ogrenci[toplamOgrenci].no, ogrenci[toplamOgrenci].ad, ogrenci[toplamOgrenci].soyad, &ogrenci[toplamOgrenci].devamsizlik) == 4) {
		int bulundu = 0;
		for(int i = 0 ; i < toplamOgrenci ; i++) {
			if(strcmp(ogrenci[i].ad, ogrenci[toplamOgrenci].soyad) == 0 && strcmp(ogrenci[i].soyad, ogrenci[toplamOgrenci].soyad) == 0) {
				ogrenci[i] = ogrenci[toplamOgrenci];
				bulundu = 1;
				break;
			}
		}
		if(!bulundu) {
			toplamOgrenci++;
		}
	}
	

	for(int i = 0 ; i < toplamOgrenci - 1; i++) {
		for(int j = i + 1 ; j < toplamOgrenci ; j++) {
			if(ogrenci[j].devamsizlik > ogrenci[i].devamsizlik) {
				struct ogrenciler temp = ogrenci[i];
				ogrenci[i] = ogrenci[j];
				ogrenci[j] = temp;
			}
		}
	}
	
	for(int i = 0 ; i < toplamOgrenci ; i++) {
		fprintf(pYazdir, "%d %s %s %d\n", ogrenci[i].no, ogrenci[i].ad, ogrenci[i].soyad, ogrenci[i].devamsizlik);
	}
	
	fclose(pOku);
	fclose(pYazdir);
	printf("Dosya olusturuldu.\n");
	return 0;
}
