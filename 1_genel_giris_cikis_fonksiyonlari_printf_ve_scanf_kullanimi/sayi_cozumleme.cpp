#include <stdio.h>

int main() {
	int sayi;
	printf("Bir sayi giriniz(maksimum 4 haneli): ");
	scanf("%d", &sayi);
	
	int sayiBinlik;
	int sayiYuzluk;
	int sayiOnluk;
	int sayiBirlik;
	printf("\n\nCozumlenecek sayi: %d", sayi);
	
	sayiBinlik = sayi/1000;
	printf("\n%d tane binlik vardir", sayiBinlik);
	sayiYuzluk = (sayi/100)%10;
	printf("\n%d tane yuzluk vardir", sayiYuzluk);
	sayiOnluk = (sayi/10)%10;
	printf("\n%d tane onluk vardir", sayiOnluk);
	sayiBirlik = sayi%10;
	printf("\n%d tane birlik vardir", sayiBirlik);
	return 0;
}
