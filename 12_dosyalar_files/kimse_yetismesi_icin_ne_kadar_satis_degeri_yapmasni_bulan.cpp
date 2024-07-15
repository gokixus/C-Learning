#include <stdio.h>

struct personel {
	int sicilNo;
	char ad[20];
	char soyad[20];
	int satis;
}calisan[50];

int main() {
	FILE *pOku = fopen("yillik.dat", "r");
	FILE *pYazdir = fopen("satislar.dat", "w");
	if(!pOku || !pYazdir) {
		perror("Dosya acilamadi veya olusturulamadi.\n");
		return 1;
	}
	
	int topCal = 0;
	while(fscanf(pOku, "%d %s %s %d", &calisan[topCal].sicilNo, calisan[topCal].ad, calisan[topCal].soyad, &calisan[topCal].satis) == 4) {
		topCal++;
	}
	
	int enb = calisan[0].satis;
	for(int i = 0 ; i < topCal ; i++) {  //en buyuk satis degerini belirleme islemi
		if(enb < calisan[i].satis) {
			enb = calisan[i].satis;
		}
	}
	
	for(int i = 0 ; i < topCal ; i++) { //calisanin ne kadar cok satmasi gerektigini belirleme islemi
		calisan[i].satis = enb - calisan[i].satis;
	}
	
	for(int i = 0 ; i < topCal - 1 ; i++) { //satis degerlerini en buyukten en kucuge siralama islemi
		for(int j = i + 1 ; j < topCal ; j++) {
			if(calisan[j].satis > calisan[i].satis) {
				struct personel temp = calisan[i];
				calisan[i] = calisan[j];
				calisan[j] = temp;
			}
		}
	}
	for(int i = 0 ; i < topCal ; i++) { //kayit yazdirma islemi
		fprintf(pYazdir, "%d %s %s %d\n", calisan[i].sicilNo, calisan[i].ad, calisan[i].soyad, calisan[i].satis);
	}
	
	fclose(pOku);
	fclose(pYazdir);
	printf("Dosya olusturuldu.\n");
	return 0;
}
