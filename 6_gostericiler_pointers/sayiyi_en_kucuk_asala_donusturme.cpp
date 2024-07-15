#include <stdio.h>

// Asal sayý kontrolü yapan fonksiyon
int asalMi(int num) {
    if (num <= 1)
        return 0;
    if (num == 2)
        return 1;
    if (num % 2 == 0)
        return 0;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// Kendisinden büyük ilk asal sayýyý bulan fonksiyon
int asalaTamamla(int num) {
    num++;
    while (!asalMi(num))
        num++;
    return num;
}

int main() {
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    int sonuc = asalaTamamla(sayi);
    printf("Girilen sayidan sonraki ilk asal sayi: %d\n", sonuc);
    return 0;
}

