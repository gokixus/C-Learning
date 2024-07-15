#include <stdio.h>
#include <string.h>

int main() {
	FILE *fOku = fopen("sonuclar123.txt", "r");
	FILE *fYaz1 = fopen("erkekler.txt", "w");
	FILE *fYaz2 = fopen("kadinlar.txt", "w");
	if(!fOku || !fYaz1 || !fYaz2) {
		perror("Dosya acilamadi veya olusturulamadi.\n");
		return 1;
	}
	
	char ad[15], soyad[15], cinsiyet[15];
	float puan, toplamErkekPuan = 0, toplamKadinPuan = 0, enYuksekErkekPuan = 0.0, enYuksekKadinPuan = 0.0;
	int toplamErkek = 0, toplamKadin = 0;
	char erkekbirinciAd[15] = "", erkekbirinciSoyad[15] = "", kadinbirinciAd[15] = "", kadinbirinciSoyad[15] = "";
	
	while(fscanf(fOku, "%s %s %s %f", ad, soyad, cinsiyet, &puan) != EOF) {
		if(strcmp(cinsiyet, "Erkek") == 0) {
			toplamErkek++;
			toplamErkekPuan += puan;
			if (puan > enYuksekErkekPuan) {
                enYuksekErkekPuan = puan;
                strcpy(erkekbirinciAd, ad);
                strcpy(erkekbirinciSoyad, soyad);
            }
		} else if (strcmp(cinsiyet, "Kiz") == 0) {
            toplamKadin++;
            toplamKadinPuan += puan;
            if (puan > enYuksekKadinPuan) {
                enYuksekKadinPuan = puan;
                strcpy(kadinbirinciAd, ad);
                strcpy(kadinbirinciSoyad, soyad);
            }
        }
	}
	fclose(fOku);
	
	float ortalamaErkekPuan = (float)toplamErkekPuan/toplamErkek;
	float ortalamaKadinPuan = (float)toplamKadinPuan/toplamKadin;
	
	fprintf(fYaz1, "Ogrenci Sayisi = %d\nOrtalama Puani = %0.2f\nEn Yuksek Puani = %0.2f\nBirinci = %s %s",
			toplamErkek, ortalamaErkekPuan, enYuksekErkekPuan, erkekbirinciAd, erkekbirinciSoyad);
	fprintf(fYaz2, "Ogrenci Sayisi = %d\nOrtalama Puani = %0.2f\nEn Yuksek Puani = %0.2f\nBirinci = %s %s",
			toplamKadin, ortalamaKadinPuan, enYuksekKadinPuan, kadinbirinciAd, kadinbirinciSoyad);
	
	fclose(fYaz1);
	fclose(fYaz2);
	printf("Dosyalar olusturuldu.\n");
	return 0;
}
