#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dugum {
    char marka[15];
    float tutar;
    struct dugum *ptr;
};

void listeyeEkle(struct dugum **p, char *marka, float tutar) {
	struct dugum *yeniptr, *onceptr, *sonraptr;
	sonraptr = *p;
	
	while (sonraptr != NULL) {
        if (strcmp(sonraptr->marka, marka) == 0) {
            // Marka bulundu, tutarý ekle ve fonksiyondan çýk
            sonraptr->tutar += tutar;
            return;
        }
        sonraptr = sonraptr->ptr;
    }
	
	yeniptr = (struct dugum*)malloc(sizeof(struct dugum));
    if (yeniptr != NULL) {
        strcpy(yeniptr->marka, marka);
        yeniptr->tutar = tutar;
        yeniptr->ptr = NULL;

        onceptr = NULL;
        sonraptr = *p;

        // Listeyi büyükten küçüðe sýralayarak ekle
        while (sonraptr != NULL && sonraptr->tutar > tutar) {
            onceptr = sonraptr;
            sonraptr = sonraptr->ptr;
        }

        if (onceptr == NULL) {
            // Listenin baþýna ekle
            yeniptr->ptr = *p;
            *p = yeniptr;
        } else {
            // Listenin ortasýna veya sonuna ekle
            onceptr->ptr = yeniptr;
            yeniptr->ptr = sonraptr;
        }
    } else {
        printf("Bellek yetersiz.\n");
    }
}

void yazdir(struct dugum *liste) {
    FILE *fYazdir = fopen("arabaToplam.dat", "w");
    if (fYazdir == NULL) {
        printf("Dosya oluþturulamadý.\n");
        return;
    }

    struct dugum *gecici = liste;
    while (gecici != NULL) {
        fprintf(fYazdir, "%s %0.2f\n", gecici->marka, gecici->tutar);
        gecici = gecici->ptr;
    }
    fclose(fYazdir);
}

int main() {
	struct dugum *liste = NULL;
    char marka[15];
    float tutar;

	printf("PROGRAMDAN CIKMAK ICIN GIRDI OLARAK 0 0 GIRINIZ\n");
    while (1) {
        printf("Marka, tutar giriniz: ");
        scanf("%s%f", marka, &tutar);

        if (strcmp(marka, "0") == 0 && tutar == 0) {
        	printf("\nPROGRAM SONA ERDI.\n");
        	printf("OZET BILGILER arabaToplam.dat DOSYASINDA KAYDEDILDI.\n");
            break;
        }

        listeyeEkle(&liste, marka, tutar);
    }
    
    yazdir(liste);
    return 0;
}


