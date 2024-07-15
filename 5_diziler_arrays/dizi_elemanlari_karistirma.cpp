#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void karistir(int dizi[], int n) {
    srand(time(NULL));
    for (int i = n-1; i > 0; i--) {
        int j = rand() % (i+1) ;
        int temp = dizi[i];
        dizi[i] = dizi[j];
        dizi[j] = temp;
    }
}

int main() {
    int dizi[] = {1, 2, 3, 4, 5};
    int n = sizeof(dizi) / sizeof(dizi[0]);       //kac eleman oldugunu bulan kod//
    karistir(dizi, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }
    return 0;
}

