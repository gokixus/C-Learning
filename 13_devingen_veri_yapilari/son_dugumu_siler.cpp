#include <stdio.h>
#include <stdlib.h>

// D���m yap�s� tan�m�
struct fdugum {
    int sayi;
    struct fdugum* ptr;
};

// Listenin son d���m�n� silen fonksiyon
void sondanSil(struct fdugum** baslangic) {
    // Liste bo�sa veya sadece bir d���m varsa
    if (*baslangic == NULL) {
        printf("Liste zaten bo�.\n");
        return;
    }

    if ((*baslangic)->ptr == NULL) {
        // Tek d���ml� liste
        free(*baslangic);
        *baslangic = NULL;
        return;
    }

    // Son d���me kadar ilerle
    struct fdugum* gecici = *baslangic;
    while (gecici->ptr->ptr != NULL) {
        gecici = gecici->ptr;
    }

    // Son d���m� sil
    free(gecici->ptr);
    gecici->ptr = NULL;
}

// Listeyi yazd�rma fonksiyonu
void listeyiYazdir(struct fdugum* baslangic) {
    struct fdugum* gecici = baslangic;
    while (gecici != NULL) {
        printf("%d -> ", gecici->sayi);
        gecici = gecici->ptr;
    }
    printf("NULL\n");
}

// Ana fonksiyon (test ama�l�)
int main() {
    // Test i�in birka� d���m olu�tur
    struct fdugum* baslangic = (fdugum *)malloc(sizeof(struct fdugum));
    baslangic->sayi = 1;
    baslangic->ptr = (fdugum *)malloc(sizeof(struct fdugum));
    baslangic->ptr->sayi = 2;
    baslangic->ptr->ptr = (fdugum *)malloc(sizeof(struct fdugum));
    baslangic->ptr->ptr->sayi = 3;
    baslangic->ptr->ptr->ptr = NULL;

    // Listeyi yazd�r
    printf("Orijinal liste: ");
    listeyiYazdir(baslangic);

    // Son d���m� sil
    sondanSil(&baslangic);

    // Listeyi tekrar yazd�r
    printf("\nSon dugum silindikten sonra: ");
    listeyiYazdir(baslangic);

    return 0;
}

