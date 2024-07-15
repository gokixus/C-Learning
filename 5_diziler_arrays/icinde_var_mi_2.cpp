#include <stdio.h>

int icindeVarMi(int dizi1[], int n1, int dizi2[], int n2) {
    int i, j; // döngü deðiþkenleri
    
    for (i = 0; i <= n1 - n2; i++) {
        // ikinci dizi ile ayný uzunlukta bir alt dizi oluþtur
        int altDizi[n2];
        
        // i'den baþlayarak n2 kadar dizi1 elemanýný altDizi'ye kopyala
        for (j = 0; j < n2; j++) {
            altDizi[j] = dizi1[i + j];
        }
        
        // altDizi ile dizi2'yi karþýlaþtýr
        int esitMi = 1; // eþitlik kontrolü için bir deðiþken
        for (j = 0; j < n2; j++) {
            if (altDizi[j] != dizi2[j]) {
                esitMi = 0;
                break; // eþitlik saðlanmadýysa döngüyü kýr
            }
        }
        
        if (esitMi == 1) {
            return 1; // ikinci dizi birinci dizinin içinde bulundu
        }
    }
    
    return 0; // ikinci dizi birinci dizinin içinde bulunamadý
}

int main() {
    int dizi1[7] = {3, 12, 1, 12, 7, 3, 12};
    int dizi2[3] = {12, 7, 3};
    
    printf("Sonuc = %d", icindeVarMi(dizi1, 7, dizi2, 3));
    
    return 0;
}

