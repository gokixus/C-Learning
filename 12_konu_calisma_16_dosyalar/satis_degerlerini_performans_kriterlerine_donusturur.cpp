#include <stdio.h>
#include <string.h>

struct personel {
	char ad[15];
	char soyad[15];
	float satis;
}calisan[12];

void ekleDegistir(struct personel calisan[], int *toplamCalisan, FILE *dosya) {
	while(fscanf(dosya, "%s %s %f", calisan[*toplamCalisan].ad, calisan[*toplamCalisan].soyad, &calisan[*toplamCalisan].satis) == 3) {
		int bulundu = 0;
		for(int i = 0 ; i < *toplamCalisan ; i++) {
			if(strcmp(calisan[i].ad, calisan[*toplamCalisan].ad) == 0 && strcmp(calisan[i].soyad, calisan[*toplamCalisan].soyad) == 0) {
				calisan[i] = calisan[*toplamCalisan];
				bulundu = 1;
				break;
			}
		}
		if(!bulundu) {
			(*toplamCalisan)++;
		}
	}
	
	float enb = calisan[0].satis;
	for(int i = 0 ; i < *toplamCalisan ; i++) {  /*en buyuk satis degerini bulur*/
		if(calisan[i].satis > enb) {
			enb = calisan[i].satis;
		}
	}
	
	float spd = 0;
	for(int j = 0 ; j < *toplamCalisan ; j++) {  /*bilgileri güncelle*/
		calisan[j].satis = enb - calisan[j].satis;
	}
}

void siralayarakYazdir(struct personel calisan[], int *toplamCalisan, const char *dosyaAdi) {
	FILE *dosyaYazdir = fopen(dosyaAdi, "w");
	if(!dosyaYazdir) {
		perror("Dosya olusturulamadi.\n");
		return;
	}
	
    int i, j;
    struct personel temp;
    for (i = 0; i < *toplamCalisan - 1; i++) {
        for (j = 0; j < *toplamCalisan - i - 1; j++) {
            if (strcmp(calisan[j].ad, calisan[j + 1].ad) > 0) {
                // Çalýþanlarý yer deðiþtir
                temp = calisan[j];
                calisan[j] = calisan[j + 1];
                calisan[j + 1] = temp;
            } else if (strcmp(calisan[j].ad, calisan[j + 1].ad) == 0 && strcmp(calisan[j].soyad, calisan[j + 1].soyad) > 0) {
                // Adlari ayný ise, soyadlari karþýlaþtýrarak yer deðiþtir //
                temp = calisan[j];
                calisan[j] = calisan[j + 1]; 
                calisan[j + 1] = temp;
            }
        }
    }
    
    for(i = 0 ; i < *toplamCalisan ; i++) {
    	fprintf(dosyaYazdir, "%s %s %0.2f\n", calisan[i].ad, calisan[i].soyad, calisan[i].satis);
	}
	
	fclose(dosyaYazdir);
}

int main() {
	FILE *dosyaOku = fopen("satis.txt", "r");
	if(!dosyaOku) {
		perror("Dosya acilamadi\n");
		return 1;
	}
	
	int toplamCalisan = 0;
	ekleDegistir(calisan, &toplamCalisan, dosyaOku);
	siralayarakYazdir(calisan, &toplamCalisan, "prfrmns.txt");
	
	fclose(dosyaOku);
	printf("Dosya olusturuldu.\n");
	return 0;
}
