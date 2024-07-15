#include <stdio.h>
#include <string.h>

int main() {
	char hangiAy[10];
	printf("Hangi ayin faturasini istiyorsunuz: ");
	scanf("%s", hangiAy);
	
	FILE *fOku = fopen("adsl.txt", "r");
	FILE *fYazdir = fopen("fatura.txt", "w");
	if(!fOku || !fYazdir) {
		perror("Dosya acilamadi veya olusturulamadi.\n");
		return 1;
	}
	
	char aylar[10];
	int gunler;
	float yukleme, indirme;
	
	float topYukleme = 0.0, topIndirme = 0.0;
	while(fscanf(fOku, "%s %d %f %f", aylar, &gunler, &yukleme, &indirme) == 4) {
		if(strcmp(aylar, hangiAy) == 0) {
			topYukleme += yukleme;
			topIndirme += indirme;
		}
	}
	
	float kotaAsimUcreti;
	if(topIndirme > 1024*6) {
		kotaAsimUcreti = (topIndirme - 1024*6)*0.011719;
	} else {
		kotaAsimUcreti = 0.0;
	}
	fprintf(fYazdir, "%s 2012\n\nToplam Yukleme(Upload): %0.2f MB\nToplam Indirme(Download): %0.2f MB\nKota Asim Ucreti : %0.2f TL", hangiAy, topYukleme, topIndirme, kotaAsimUcreti);
	
	fclose(fOku);
	fclose(fYazdir);
	printf("\n%s 2012 faturaniz olusturulmustur.\n", hangiAy);
	return 0;
}
