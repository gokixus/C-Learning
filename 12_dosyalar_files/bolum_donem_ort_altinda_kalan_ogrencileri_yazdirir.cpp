#include <stdio.h>
#include <string.h>

struct ogrenciler {
	char ad[20];
	char soyad[20];
	float dersOrt[3];
	float donemOrt;
}ogrenci[5];

int main() {
	FILE *dosyaOku = fopen("ogrenci1234.txt", "r");
	FILE *dosyaYazdir = fopen("tekrarEdenler.txt", "w");
	if(!dosyaOku || !dosyaYazdir) {
		perror("Dosya olusturulamadi veya acilamadi.\n");
		return 1;
	}
	
	int i;
	int toplamOgrenci = 0;
	while(fscanf(dosyaOku, "%s %s %f %f %f", ogrenci[toplamOgrenci].ad, ogrenci[toplamOgrenci].soyad,
				&ogrenci[toplamOgrenci].dersOrt[0], &ogrenci[toplamOgrenci].dersOrt[1],
				&ogrenci[toplamOgrenci].dersOrt[2]) == 5) {
		int bulundu = 0;
		for(i = 0 ; i < toplamOgrenci ; i++) {
			if(strcmp(ogrenci[i].ad, ogrenci[toplamOgrenci].ad) == 0 && strcmp(ogrenci[i].soyad, ogrenci[toplamOgrenci].soyad) == 0) {
				ogrenci[i] = ogrenci[toplamOgrenci];
				bulundu = 1;
				break;
			}
		}
		if(!bulundu) {
			toplamOgrenci++;
		}
	}
	
	float toplamOrt = 0;
	for(i = 0 ; i < toplamOgrenci ; i++) {
		ogrenci[i].donemOrt = (ogrenci[i].dersOrt[0] + ogrenci[i].dersOrt[1] + ogrenci[i].dersOrt[2])/3.0;
		toplamOrt += ogrenci[i].donemOrt;
	}
	float bolumOrt = toplamOrt/toplamOgrenci;
	
	for(i = 0 ; i < toplamOgrenci ; i++) {
		if(bolumOrt > ogrenci[i].donemOrt) {
			fprintf(dosyaYazdir, "%s %s %0.2f\n", ogrenci[i].ad, ogrenci[i].soyad, ogrenci[i].donemOrt);
		}
	}
	
	fclose(dosyaOku);
	fclose(dosyaYazdir);
	printf("Dosya olusturuldu.\n");
	return 0;
}
