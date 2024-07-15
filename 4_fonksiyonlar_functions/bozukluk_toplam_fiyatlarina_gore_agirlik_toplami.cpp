#include <stdio.h>

void cevirKg(float para_miktari) {
	float toplamAgirlik = 0;
    int kalan = (para_miktari * 100);
    int kalan1 = kalan / 100;
    kalan = kalan % 100;
    int kalan2 = kalan / 50;
    kalan = kalan % 50;
    int kalan3 = kalan / 25;
    kalan = kalan % 25;
    int kalan4 = kalan / 10;
    toplamAgirlik = (kalan1 * 8.2 + kalan2 * 6.8 + kalan3 * 4 + kalan4 * 3.15) / 1000;
    printf("Bozukluklarinin toplam kg ederi : %0.5f KG", toplamAgirlik);
}

int main() {
	float para_miktari;
	printf("Para miktariniz nedir ? (TL) : ");
	scanf("%f", &para_miktari);
	cevirKg(para_miktari);
	return 0;
}
