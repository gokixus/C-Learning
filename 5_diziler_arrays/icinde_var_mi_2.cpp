#include <stdio.h>

int icindeVarMi(int dizi1[], int n1, int dizi2[], int n2) {
    int i, j; // d�ng� de�i�kenleri
    
    for (i = 0; i <= n1 - n2; i++) {
        // ikinci dizi ile ayn� uzunlukta bir alt dizi olu�tur
        int altDizi[n2];
        
        // i'den ba�layarak n2 kadar dizi1 eleman�n� altDizi'ye kopyala
        for (j = 0; j < n2; j++) {
            altDizi[j] = dizi1[i + j];
        }
        
        // altDizi ile dizi2'yi kar��la�t�r
        int esitMi = 1; // e�itlik kontrol� i�in bir de�i�ken
        for (j = 0; j < n2; j++) {
            if (altDizi[j] != dizi2[j]) {
                esitMi = 0;
                break; // e�itlik sa�lanmad�ysa d�ng�y� k�r
            }
        }
        
        if (esitMi == 1) {
            return 1; // ikinci dizi birinci dizinin i�inde bulundu
        }
    }
    
    return 0; // ikinci dizi birinci dizinin i�inde bulunamad�
}

int main() {
    int dizi1[7] = {3, 12, 1, 12, 7, 3, 12};
    int dizi2[3] = {12, 7, 3};
    
    printf("Sonuc = %d", icindeVarMi(dizi1, 7, dizi2, 3));
    
    return 0;
}

