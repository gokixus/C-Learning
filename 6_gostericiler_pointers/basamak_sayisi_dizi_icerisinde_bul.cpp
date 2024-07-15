#include <stdio.h>

int basamakla(long, int *);

int main() {
	long sayi;
	printf("Sayi giriniz(en fazla 10 basamakli): ");
	scanf("%d", &sayi);
    int dizi[11];
	int basamak_sayisi = basamakla(sayi, dizi);
    printf("Basamak Sayisi: %d\n", basamak_sayisi);
    printf("Dizi: ");
    for (int i = 0; i <= basamak_sayisi; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
    return 0;
}

int basamakla(long sayi, int *dizi) {
    int basamak_sayisi = 0;
    while (sayi > 0) {
        dizi[basamak_sayisi++] = sayi % 10;
        sayi /= 10;
    }
    dizi[basamak_sayisi] = -1;
    return basamak_sayisi;
}
