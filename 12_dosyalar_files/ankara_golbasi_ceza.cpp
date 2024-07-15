#include <stdio.h>
#include <string.h>

int main() {
	FILE *ankaraOku = fopen("ankara.txt", "r");
	FILE *golbasiOku = fopen("golbasi.txt", "r");
	FILE *cezaYazdir = fopen("ceza.txt", "w");
	if(!ankaraOku || !golbasiOku || !cezaYazdir ) { 
		perror("Dosya acilamadi veya olusturulamadi.\n");
		return 1;
	}
	
	char plaka1[15], plaka2[15];
	int saat1, saat2, dk1, dk2, sn1, sn2;
	float topZaman;
	while(fscanf(ankaraOku, "%s %d:%d:%d", plaka1, &saat1, &dk1, &sn1) != EOF) {
		rewind(golbasiOku);
		while(fscanf(golbasiOku, "%s %d:%d:%d", plaka2, &saat2, &dk2, &sn2) != EOF) {
			if(strcmp(plaka1, plaka2) == 0) {
				topZaman = saat2*3600 + dk2*60 + sn2 - saat1*3600 - dk1*60 - sn1;
				float hesapla = ((7430/topZaman)*3600)/1000;
				if(hesapla > 70.0) {
					fprintf(cezaYazdir, "%s %0.2f\n", plaka1, hesapla);
				}
			}
		}
	}
	fclose(ankaraOku);
	fclose(golbasiOku);
	fclose(cezaYazdir);
	printf("ceza.txt dosyasi olusturuldu.\n");
	return 0;
}
