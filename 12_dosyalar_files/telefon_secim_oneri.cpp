#include <stdio.h>
#include <math.h>
#include <string.h>

struct telefonlar {
	char marka[20];
	char model[20];
	float fiyat;
}cepTel[50];

int main() {
	FILE *pOku = fopen("telefonFiyat.txt", "r");
	FILE *pYaz = fopen("telefonOneri.txt", "w");
	if(!pOku || !pYaz) {
		perror("Dosya acilamadi veya olusturulamadi.\n");
		return 1;
	}
	
	int topTel = 0;
	while(fscanf(pOku, "%s %s %f", cepTel[topTel].marka, cepTel[topTel].model, &cepTel[topTel].fiyat) != EOF) {
		int bulundu = 0;
		for(int i = 0 ; i < topTel ; i++) {
			if(strcmp(cepTel[i].model, cepTel[topTel].model) == 0) {
				cepTel[i] = cepTel[topTel];
				bulundu = 1;
				break;
			}
		}
		if(!bulundu) {
			topTel++;
		}
	}
	
	float fiyat = 0;
	for(int i = 0 ; i < topTel ; i++) {
		fiyat += cepTel[i].fiyat;
	}
	float ortalamaFiyat = fiyat/topTel;
	float enYakinFark = abs(ortalamaFiyat - cepTel[0].fiyat);
	
	int enYakini;
	for(int i = 1 ; i < topTel ; i++) {
		float fark = abs(ortalamaFiyat - cepTel[i].fiyat);
		if(enYakinFark > fark) {
			float enYakinFark = fark;
			enYakini = i;
		}
	}
	
	fprintf(pYaz, "Ortalama fiyata(%.2f) en yakin telefon:\n", ortalamaFiyat);
    fprintf(pYaz, "Marka: %s\n", cepTel[enYakini].marka);
    fprintf(pYaz, "Model: %s\n", cepTel[enYakini].model);
    fprintf(pYaz, "Fiyat: %.2f\n", cepTel[enYakini].fiyat);

	fclose(pOku);
    fclose(pYaz);

    printf("Dosya olusturuldu.\n");
    return 0;
	
}
