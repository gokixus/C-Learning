#include <stdio.h>
#include <math.h>
#include <string.h>

struct ogrenci {
    char ad[15];
    char soyad[15];
    int no;
    float quiz;
} ogrenciler[10];

void ekleDegistir(struct ogrenci ogrenciler[], int *toplamOgrenci, FILE *dosya) {
    while (fscanf(dosya, "%d %s %s %f", &ogrenciler[*toplamOgrenci].no, ogrenciler[*toplamOgrenci].ad, ogrenciler[*toplamOgrenci].soyad,
                  &ogrenciler[*toplamOgrenci].quiz) == 4) {
        int bulundu = 0;
        for (int i = 0; i < *toplamOgrenci; i++) {
            if (ogrenciler[i].no == ogrenciler[*toplamOgrenci].no) {
                // Eðer öðrenci numarasý mevcutsa bilgileri güncelle
                ogrenciler[i] = ogrenciler[*toplamOgrenci];
                bulundu = 1;
                break;
            }
        }
        if (!bulundu) {
            (*toplamOgrenci)++;
        }
    }

	float toplamOrt = 0;
	float toplamOrtKaresi = 0;
	for(int i = 0 ; i < *toplamOgrenci ; i++) {
		toplamOrt += ogrenciler[i].quiz;
		toplamOrtKaresi += pow(ogrenciler[i].quiz, 2);
	}
	float sinifOrtalamasi = toplamOrt/(*toplamOgrenci);
	float standartSapma = sqrt(((*toplamOgrenci)*toplamOrtKaresi - pow(toplamOrt, 2))/((*toplamOgrenci)*(*toplamOgrenci - 1)));
	
	for(int i = 0 ; i < *toplamOgrenci ; i++) {
		ogrenciler[i].quiz = (ogrenciler[i].quiz - sinifOrtalamasi)/standartSapma;
	}
}

void siralayarakYazdir(struct ogrenci ogrenciler[], int *toplamOgrenci, const char *dosyaAdi) {
	FILE *kayitYazdir = fopen(dosyaAdi, "w");
	if(!kayitYazdir) {
		perror("Dosya olusturulamadi.\n");
		return;
	}
	
	for (int i = 0; i < *toplamOgrenci - 1; i++) {
        for (int j = 0; j < *toplamOgrenci - i - 1; j++) {
            if (ogrenciler[j].quiz < ogrenciler[j + 1].quiz) {
                struct ogrenci temp = ogrenciler[j];
                ogrenciler[j] = ogrenciler[j + 1];
                ogrenciler[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < *toplamOgrenci; i++) {
        fprintf(kayitYazdir, "%d %s %s %.2f\n", ogrenciler[i].no, ogrenciler[i].ad, ogrenciler[i].soyad, ogrenciler[i].quiz);
    }
    
    fclose(kayitYazdir);
}

int main() {
    FILE *kayitOku = fopen("quiz.txt", "r");
    if (!kayitOku) {
        perror("Dosya acilamadi.\n");
        return 1;
    }

    int toplamOgrenci = 0;
    ekleDegistir(ogrenciler, &toplamOgrenci, kayitOku);
    siralayarakYazdir(ogrenciler, &toplamOgrenci, "stdquiz.txt");
    fclose(kayitOku);
    printf("Dosya olusturuldu.\n");
    return 0;
}

