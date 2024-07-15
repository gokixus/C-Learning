#include <stdio.h>
int ilkBenzersiz(int dizi[], int elemanSayisi) {
    int i, j;
    for (i = 0; i < elemanSayisi; i++) {
    	int adet = 0;
        for (j = 0; j < elemanSayisi; j++) {
            if (dizi[i] == dizi[j]) {
                adet++;
            }
        }
        if (adet == 1) {
            return dizi[i];
        }
    }
    return -1;
}

int main() {
    int dizi[10];
    int i;
    printf("10 eleman giriniz: ");
    for(i = 0 ; i < 10 ; i++) {
        scanf("%d", &dizi[i]);
    }
    printf("Dizinin ilk benzersizi = %d", ilkBenzersiz(dizi, 10));
}

