#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct agac {
    struct agac *sol;
    struct agac *sag;
    char ad[15];
    int telefon;
};

// Menüyü gösteren fonksiyon
int menu() {
    int secim;
    printf("\n\n--- MENU ---\n");
    printf("0. Ekle\n");
    printf("1. Yazdir\n");
    printf("2. Ara\n");
    printf("3. Cikis\n");
    printf("Seciminizi yapin: ");
    scanf("%d", &secim);
    return secim;
}

// Yeni bir düðüm oluþturup verileri dolduran fonksiyon
struct agac *dugumOlustur(char ad[15], int telefon) {
    struct agac *yeniDugum = (struct agac *)malloc(sizeof(struct agac));
    if (yeniDugum == NULL) {
        printf("Hafiza yetersiz!\n");
        exit(1);
    }
    strcpy(yeniDugum->ad, ad);
    yeniDugum->telefon = telefon;
    yeniDugum->sol = NULL;
    yeniDugum->sag = NULL;
    return yeniDugum;
}

// Agaca yeni bir düðüm ekleyen fonksiyon
void agacaEkle(struct agac **kokPtr) {
    char ad[15];
    int telefon;
    printf("\nEklenecek adi giriniz: ");
    scanf("%s", ad);
    printf("Eklenecek telefonu giriniz: ");
    scanf("%d", &telefon);

    struct agac *yeni = dugumOlustur(ad, telefon);

    // Eðer aðaç boþsa kök olarak yeni düðümü atar
    if (*kokPtr == NULL) {
        *kokPtr = yeni;
        printf("Dugum basariyla eklendi.\n");
        return;
    }

    // Aðaç boþ deðilse uygun konuma ekler
    struct agac *gezici = *kokPtr;
    while (1) {
        if (strcmp(ad, gezici->ad) < 0) {
            if (gezici->sol == NULL) {
                gezici->sol = yeni;
                printf("Dugum basariyla eklendi.\n\n");
                return;
            }
            gezici = gezici->sol;
        } else {
            if (gezici->sag == NULL) {
                gezici->sag = yeni;
                printf("Dugum basariyla eklendi.\n\n");
                return;
            }
            gezici = gezici->sag;
        }
    }
}

// Aðacý sýralý olarak yazdýran fonksiyon (in-order traversal)
void siraliYaz(struct agac *kok) {
    if (kok != NULL) {
        siraliYaz(kok->sol);
        printf("Ad: %s", kok->ad);
        siraliYaz(kok->sag);
    }
}

// Aðaçta bir düðümü adýna göre arayan fonksiyon
struct agac *arama(struct agac *kok, char ad[15]) {
    if (kok == NULL || strcmp(kok->ad, ad) == 0)
        return kok;
    if (strcmp(ad, kok->ad) < 0)
        return arama(kok->sol, ad);
    else
        return arama(kok->sag, ad);
}

int main() {
    int secim;
    struct agac *kok = NULL;

    while ((secim = menu()) != 3) {
        switch (secim) {
            case 0:
                agacaEkle(&kok);
                break;
            case 1:
                printf("\n--- Agac Yapisi ---\n");
                siraliYaz(kok);
                break;
            case 2: {
                char aranan[15];
                printf("\nAranacak adi giriniz: ");
                scanf("%s", aranan);
                struct agac *sonuc = arama(kok, aranan);
                if (sonuc != NULL)
                    printf("Bulundu: Ad: %s, Telefon: %d\n", sonuc->ad, sonuc->telefon);
                else
                    printf("Aranan bulunamadi.\n");
                break;
            }
            default:
                printf("Yanlis secim!\n");
                break;
        }
    }
    return 0;
}

