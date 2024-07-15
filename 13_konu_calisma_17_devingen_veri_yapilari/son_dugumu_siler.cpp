#include <stdio.h>
#include <stdlib.h>

// Düðüm yapýsý tanýmý
struct fdugum {
    int sayi;
    struct fdugum* ptr;
};

// Listenin son düðümünü silen fonksiyon
void sondanSil(struct fdugum** baslangic) {
    // Liste boþsa veya sadece bir düðüm varsa
    if (*baslangic == NULL) {
        printf("Liste zaten boþ.\n");
        return;
    }

    if ((*baslangic)->ptr == NULL) {
        // Tek düðümlü liste
        free(*baslangic);
        *baslangic = NULL;
        return;
    }

    // Son düðüme kadar ilerle
    struct fdugum* gecici = *baslangic;
    while (gecici->ptr->ptr != NULL) {
        gecici = gecici->ptr;
    }

    // Son düðümü sil
    free(gecici->ptr);
    gecici->ptr = NULL;
}

// Listeyi yazdýrma fonksiyonu
void listeyiYazdir(struct fdugum* baslangic) {
    struct fdugum* gecici = baslangic;
    while (gecici != NULL) {
        printf("%d -> ", gecici->sayi);
        gecici = gecici->ptr;
    }
    printf("NULL\n");
}

// Ana fonksiyon (test amaçlý)
int main() {
    // Test için birkaç düðüm oluþtur
    struct fdugum* baslangic = (fdugum *)malloc(sizeof(struct fdugum));
    baslangic->sayi = 1;
    baslangic->ptr = (fdugum *)malloc(sizeof(struct fdugum));
    baslangic->ptr->sayi = 2;
    baslangic->ptr->ptr = (fdugum *)malloc(sizeof(struct fdugum));
    baslangic->ptr->ptr->sayi = 3;
    baslangic->ptr->ptr->ptr = NULL;

    // Listeyi yazdýr
    printf("Orijinal liste: ");
    listeyiYazdir(baslangic);

    // Son düðümü sil
    sondanSil(&baslangic);

    // Listeyi tekrar yazdýr
    printf("\nSon dugum silindikten sonra: ");
    listeyiYazdir(baslangic);

    return 0;
}

