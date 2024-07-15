#include <stdio.h>

int main() {
	int sayi;
	printf("Sayiyi giriniz : ");
	scanf("%d", &sayi);
	
	int onlar;
	int birler;
	int adim = 1;
	int sayinin_tersi;
	int yeniSayi;
	
	while(sayi < 10 || sayi > 99) {
		printf("YANLIS !!! LUTFEN 2 BASAMAKLI SAYI GIRINIZ : ");
		scanf("%d", &sayi);
	}
	
	do {
		onlar = sayi/10;
		birler = sayi%10;
		sayinin_tersi = birler*10 + onlar;
		if(sayinin_tersi > sayi) {
			yeniSayi = sayinin_tersi - sayi;
			sayinin_tersi = yeniSayi;
			sayi = sayinin_tersi;
		}
		if(sayi > sayinin_tersi) {
			yeniSayi = sayi - sayinin_tersi;
			sayi = yeniSayi;
			sayinin_tersi = sayi;	
		}
		adim++;
	} while (sayi > 9);
	
	printf("Cikarma zinciri uzunlugu = %d", adim);
	return 0;
}
