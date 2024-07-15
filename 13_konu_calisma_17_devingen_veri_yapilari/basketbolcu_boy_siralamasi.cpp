#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct oyuncu {
	struct oyuncu *ptr;
	char ad[15];
	int yas;
	int kilo;
	float boy;
};

int oyuncuEkle(struct oyuncu **p, char *ad, int yas, int kilo, float boy) {
	struct oyuncu *yeniptr, *oncekiptr, *sonrakiptr;
	yeniptr = (oyuncu *)malloc(sizeof(struct oyuncu *));
	
	if(yeniptr) {
		strcpy(yeniptr->ad, ad);
		yeniptr->yas = yas;
		yeniptr->kilo = kilo;
		yeniptr->boy = boy;
		yeniptr->ptr = NULL;
		oncekiptr = NULL;
		sonrakiptr = *p;
		
		while(sonrakiptr && boy > sonrakiptr->boy) {
			oncekiptr = sonrakiptr;
			sonrakiptr = sonrakiptr->ptr;
		}
		
		if (oncekiptr == NULL) {
			*p = yeniptr;
		} else {
			oncekiptr->ptr = yeniptr;
		}
		yeniptr->ptr = sonrakiptr;
		return 1; // Successfully added
	} else {
		return 0; // Memory allocation failed
	}
}

void listeyiYazdir(struct oyuncu *p, FILE *dosya) {
	struct oyuncu *mevcut = p;
	while(mevcut) {
		printf("%s, %d, %d kg, %.2f m\n", mevcut->ad, mevcut->yas, mevcut->kilo, mevcut->boy);
        fprintf(dosya, "%s, %d, %d kg, %.2f m\n", mevcut->ad, mevcut->yas, mevcut->kilo, mevcut->boy);
        mevcut = mevcut->ptr;
	}
}

int main() {
	FILE* dosya = fopen("oyuncu.dat", "r");
    if (dosya == NULL) {
        perror("Dosya açýlamadý");
        return 1;
    }

    struct oyuncu *bas = NULL;
    char ad[50];
    int yas;
    float kilo, boy;

    while (fscanf(dosya, "%s %d %f %f", ad, &yas, &kilo, &boy) != EOF) {
        oyuncuEkle(&bas, ad, yas, kilo, boy);
    }
    fclose(dosya);

    dosya = fopen("index.dat", "w");
    if (dosya == NULL) {
        perror("Dosya açýlamadý");
        return 1;
    }

    listeyiYazdir(bas, dosya);
    fclose(dosya);

    // Baðlý listeyi serbest býrakma
    struct oyuncu *gecici;
    while (bas != NULL) {
        gecici = bas;
        bas = bas->ptr;
        free(gecici);
    }

    return 0;
}
