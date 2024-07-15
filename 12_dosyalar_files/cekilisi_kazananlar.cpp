#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

struct memur {
	char ad[25];
	char soyad[25];
	int dogumTarihi;
	int olumTarihi;
}memurlar[20];

int main() {
	FILE *pOku = fopen("cekilis.txt", "r");
	FILE *pYaz = fopen("kazananlar.txt", "w");
	if(!pOku || !pYaz) {
		perror("Dosya acilamadi veya olusturulamadi.\n");
	}
	
	int toplamMemur = 0;
	while(fscanf(pOku ,"%s %s %d %d", memurlar[toplamMemur].ad, memurlar[toplamMemur].soyad, &memurlar[toplamMemur].dogumTarihi, &memurlar[toplamMemur].olumTarihi) != EOF) {
		int bulundu = 0;
		for(int i = 0 ; i < toplamMemur ; i++) {
			if(strcmp(memurlar[i].ad, memurlar[toplamMemur].soyad) == 0 && strcmp(memurlar[i].soyad, memurlar[toplamMemur].soyad) == 0) {
				memurlar[i] = memurlar[toplamMemur];
				bulundu = 1;
				break;
			}
		}
		if(!bulundu) {
			toplamMemur++;
		}
	}
	
	int gunumuzunYili = 2024;
	struct memur cekiliseGirecekler[20];
	int cekilisTop = 0;
	for(int i = 0 ; i < toplamMemur ; i++) {
		if(memurlar[i].olumTarihi == 0 && (gunumuzunYili - memurlar[i].dogumTarihi) >= 18) {
			cekiliseGirecekler[cekilisTop++] = memurlar[i];
		}
	}
	
	srand(time(NULL));
	int kazananlar[4] = {-1, -1, -1, -1};
	int kazananlarAdet = 0;
	while(kazananlarAdet < 4) {
		int randIndex = rand() % cekilisTop;
		int isKazandi = 0;
		for(int i = 0 ; i < kazananlarAdet ; i++) {
			if(kazananlar[i] == randIndex) {
				isKazandi = 1;
				break;
			}
		}
		if(!isKazandi) {
			kazananlar[kazananlarAdet++] = randIndex;
		}
	}
	
	for (int i = 0; i < 4; i++) {
        fprintf(pYaz, "%s %s\n", cekiliseGirecekler[kazananlar[i]].ad, cekiliseGirecekler[kazananlar[i]].soyad);
    }

	fclose(pOku);
    fclose(pYaz);
    printf("kazananlar.txt dosyasi olusturuldu.\n");

    return 0;
	
}
