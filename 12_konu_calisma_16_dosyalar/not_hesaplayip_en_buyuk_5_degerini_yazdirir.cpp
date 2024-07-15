#include <stdio.h>
#include <string.h>

struct ogrenciler {
	char ad[20];
	char soyad[20];
	int mezOrt;
	int ales;
	int uds;
	float toplamPuan;
}ogrenci[10];

int main() {
	FILE *dosyaoku = fopen("ogrenci123.txt", "r");
	FILE *dosyayazdir = fopen("kazananlar.txt", "w");
	if(!dosyaoku || !dosyayazdir) {
		perror("Dosya acilamadi veya olusturulamadi.\n");
		return 1;
	}
	
	int i, j;
	int toplamOgrenci = 0;
	while(fscanf(dosyaoku, "%s %s %d %d %d", ogrenci[toplamOgrenci].ad, ogrenci[toplamOgrenci].soyad, &ogrenci[toplamOgrenci].mezOrt,
				&ogrenci[toplamOgrenci].ales, &ogrenci[toplamOgrenci].uds) == 5) {
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
	
	for(i = 0 ; i < toplamOgrenci ; i++) { //puan hesaplamasý
		ogrenci[i].toplamPuan = ogrenci[i].mezOrt*0.5 + ogrenci[i].ales*0.25 + ogrenci[i].uds*0.25;
	}
	
	for(i = 0 ; i < toplamOgrenci - 1 ; i++) {
		for(j = i+1 ; j < toplamOgrenci ; j++) {
			if(ogrenci[j].toplamPuan > ogrenci[i].toplamPuan) {
				struct ogrenciler temp = ogrenci[i];
                ogrenci[i] = ogrenci[j];
                ogrenci[j] = temp;
			}
		}
	}
	
	for(i = 0 ; i < 5 ; i++) { //en buyuk 5 degerini yazdirir
		fprintf(dosyayazdir, "%s %s %0.2f\n", ogrenci[i].ad, ogrenci[i].soyad, ogrenci[i].toplamPuan);
	}
	
	fclose(dosyaoku);
	fclose(dosyayazdir);
	printf("Dosya olusturuldu.\n");
	return 0;
}
