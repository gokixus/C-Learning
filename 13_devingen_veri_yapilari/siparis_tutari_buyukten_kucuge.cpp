#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct garson {
    char ad[15];
    float siparisTutari;
    struct garson *ptr;
};

// Listeye eleman ekleme ve s�ralama fonksiyonu
void listeyeEkle(struct garson **p, char *ad, float siparisTutari) {
    struct garson *onceptr, *sonraptr, *yeniptr;
    yeniptr = (struct garson*)malloc(sizeof(struct garson));
    if (yeniptr != NULL) {
        strcpy(yeniptr->ad, ad);
        yeniptr->siparisTutari = siparisTutari;
        yeniptr->ptr = NULL;

        onceptr = NULL;
        sonraptr = *p;

        // Listeyi b�y�kten k����e s�ralayarak ekle
        while (sonraptr != NULL && sonraptr->siparisTutari > siparisTutari) {
            onceptr = sonraptr;
            sonraptr = sonraptr->ptr;
        }

        if (onceptr == NULL) {
            // Listenin ba��na ekle
            yeniptr->ptr = *p;
            *p = yeniptr;
        } else {
            // Listenin ortas�na veya sonuna ekle
            onceptr->ptr = yeniptr;
            yeniptr->ptr = sonraptr;
        }
    } else {
        printf("Bellek yetersiz.\n");
    }
}

int main() {
    FILE *fOku = fopen("siparis.dat", "r");
    FILE *fYazdir = fopen("toplam.dat", "w");
    if (!fOku || !fYazdir) {
        perror("Dosya a�ilamadi veya olu�turulamad�.\n");
        return 1;
    }

    struct garson *garsonListesi = NULL;
    char ad[15];
    float siparisTutari;

    while (fscanf(fOku, "%s %f", ad, &siparisTutari) != EOF) {
        struct garson *gecici = garsonListesi;
        int bulundu = 0;

        // Garsonun daha �nce listede olup olmad���n� kontrol et
        while (gecici != NULL) {
            if (strcmp(gecici->ad, ad) == 0) {
                gecici->siparisTutari += siparisTutari;

                // Garsonun konumunu kontrol edip gerekiyorsa yeniden yerle�tir
                struct garson *temp = garsonListesi, *prev = NULL;
                while (temp != NULL && temp != gecici) {
                    if (gecici->siparisTutari > temp->siparisTutari) {
                        if (prev == NULL) {
                            garsonListesi = gecici;
                        } else {
                            prev->ptr = gecici;
                        }
                        struct garson *next = gecici->ptr;
                        gecici->ptr = temp;
                        if (next != NULL) {
                            temp->ptr = next;
                        }
                        break;
                    }
                    prev = temp;
                    temp = temp->ptr;
                }

                bulundu = 1;
                break;
            }
            gecici = gecici->ptr;
        }

        if (!bulundu) {
            // Garson listede yoksa listeye ekle
            listeyeEkle(&garsonListesi, ad, siparisTutari);
        }
    }

    // Listede bulunan garsonlar� ve toplam sipari� tutarlar�n� yazd�r
    struct garson *gecici = garsonListesi;
    while (gecici != NULL) {
        fprintf(fYazdir, "%s %.2f\n", gecici->ad, gecici->siparisTutari);
        gecici = gecici->ptr;
    }

    // Dosyalar� kapat
    fclose(fOku);
    fclose(fYazdir);

    // Bellek temizli�i
    while (garsonListesi != NULL) {
        struct garson *gecici = garsonListesi;
        garsonListesi = garsonListesi->ptr;
        free(gecici);
    }

    return 0;
}

