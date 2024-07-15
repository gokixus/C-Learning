#include <stdio.h>

void ekle(int dizi[], int boyut, int eleman) {
    int i, j;
    for(i = 0; i < boyut; i++) {
        if(dizi[i] == 0 || dizi[i] < eleman) {
            for(j = boyut - 1; j > i; j--) {
                dizi[j] = dizi[j - 1];
            }
            dizi[i] = eleman;
            break;
        }
    }
}

int main() {
    int dizi[10] = {53, 47, 45, 40, 10, 8, 7, 3, 0, 0};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    int eklenecek;
    printf("Eklenecek eleman = ");
    scanf("%d", &eklenecek);

    ekle(dizi, boyut, eklenecek);

    for(int i = 0; i < boyut; i++) {
        printf("%d ", dizi[i]);
    }

    return 0;
}

