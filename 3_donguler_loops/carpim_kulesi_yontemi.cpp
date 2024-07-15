#include <stdio.h>

int main() {
	int yukseklik = 0;
	int sayi1, sayi2;
	int sonuc = 0;
	
	printf("Iki adet sifirdan buyuk tamsayi giriniz : ");
	scanf("%d%d", &sayi1, &sayi2);
	
	while(sayi1 <= 0 || sayi2 <= 0) {
		printf("HATA !!! Sayilar sifirdan buyuk olmali.\n");
		printf("Iki adet sifirdan buyuk tamsayi giriniz : ");
		scanf("%d%d", &sayi1, &sayi2);
	}
	
	while(sayi1 > 0) {
		if(sayi1%2 == 1) {
			sonuc += sayi2;
		}
		sayi1 /= 2;
		sayi2 *= 2;
		yukseklik++;
	}
	printf("------------------------------------------------\n");
	printf("Carpim kulesi ile hesaplanan sonuc = %d", sonuc);
	printf("\nKule yuksekligi = %d", yukseklik);
	
	return 0;
}
