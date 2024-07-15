#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci {
	struct ogrenci *ptr;
	char ad[15];
	int vize1;
	int vize2;
	int final;
	float ortalama;
};

int listeyeEkle(struct ogrenci **p, char *ad, int vize1, int vize2, int final, float ortalama) {
	struct ogrenci *oncekiptr = NULL, *sonrakiptr = *p, *yeniptr;
	yeniptr = (ogrenci *)malloc(sizeof(struct ogrenci));
	if(yeniptr == NULL) {
		return 0;
	}
	
	strcpy(yeniptr->ad, ad);
	yeniptr->vize1 = vize1;
	yeniptr->vize2 = vize2;
	yeniptr->final = final;
	yeniptr->ortalama = ortalama;
	yeniptr->ptr = NULL;
	
	while(sonrakiptr != NULL) {
		oncekiptr = sonrakiptr;
		sonrakiptr = sonrakiptr->ptr;
	}
	
	if(oncekiptr == NULL) {
		*p = yeniptr;
	} else {
		oncekiptr->ptr = yeniptr;
	}
	yeniptr->ptr = sonrakiptr;
	return 1;

}

void listeyiTerstenYazdir(struct ogrenci *p, FILE *f) {
	if(p == NULL) {
		return;
	}
	listeyiTerstenYazdir(p->ptr, f);
	fprintf(f, "%s %d %d %d %0.2f\n", p->ad, p->vize1, p->vize2, p->final, p->ortalama);
}

int main() {
	FILE *fOku = fopen("ogrenci.dat", "r");
	FILE *fYaz = fopen("ters1.dat", "w");
	if(!fOku || !fYaz) {
		perror("Dosya olusturulamadi veya acilamadi.\n");
		return 1;
	}
	
	struct ogrenci *bas = NULL;
	char ad[15];
	int vize1, vize2, final;
	float ortalama;
	while(fscanf(fOku, "%s %d %d %d %f", ad, &vize1, &vize2, &final, &ortalama) != EOF) {
		listeyeEkle(&bas, ad, vize1, vize2, final, ortalama);
	}
	fclose(fOku);
	
	listeyiTerstenYazdir(bas, fYaz);
	fclose(fYaz);
}
