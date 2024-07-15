#include <stdio.h>
#define MAX_SIZE 100000

void ilkTekrarlayaniBul(int *dizi, int n, int *elemanPtr, int *indisPtr) {
    int hash[MAX_SIZE] = {0};
    int i;
    *elemanPtr = -1; // Tekrarlayan eleman yok
    *indisPtr = -1;  // Tekrarlayan eleman yok
    for(i = 0 ; i < n ; i++) {
        if(hash[dizi[i]] != 0) {
            *elemanPtr = dizi[i];
            *indisPtr = hash[dizi[i]] - 1;
            return;
        }
        hash[dizi[i]] = i + 1;
    }
}

int main() {
    int dizi[9];
    printf("Dizinin elemanlarini giriniz(9 adet): ");
    int i;
    for(i = 0 ; i < 9 ; i++) {
        scanf("%d", &dizi[i]);
    }
    int indis, eleman;
    ilkTekrarlayaniBul(dizi, 9, &eleman, &indis);
    if(eleman != -1) {
        printf("\nIlk tekrarlayan: %d", eleman);
        printf("\nIlk tekrarlayanin indisi: %d", indis);
    } else {
        printf("\nTekrarlayan eleman yok.");
    }
    return 0;
}

