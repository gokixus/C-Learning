#include <stdio.h>

int main() {
	int sayi;
	printf("Bir sayi giriniz(3 basamakli): ");
	scanf("%d", &sayi);
	
	int sayiYuz, sayiOn, sayiBir;
	sayiYuz = sayi/100;
	sayiOn = (sayi/10)%10;
	sayiBir = sayi%10;
	
	int yeniSayi;
	
	if(sayiYuz>sayiOn && sayiOn>sayiBir) {
		yeniSayi = sayiBir*100 + sayiOn*10 + sayiYuz;
		printf("Bu sayidan elde edilebilecek en kucuk sayi = %d", yeniSayi);
	}
	if(sayiYuz>sayiBir && sayiBir>sayiOn) {
		yeniSayi = sayiOn*100 + sayiBir*10 + sayiYuz;
		printf("Bu sayidan elde edilebilecek en kucuk sayi = %d", yeniSayi);
	}
	if(sayiOn>sayiYuz && sayiYuz>sayiBir) {
		yeniSayi = sayiBir*100 + sayiYuz*10 + sayiOn;
		printf("Bu sayidan elde edilebilecek en kucuk sayi = %d", yeniSayi);
	}
	if(sayiOn>sayiBir && sayiBir>sayiYuz) {
		yeniSayi = sayiYuz*100 + sayiBir*10 + sayiOn;
		printf("Bu sayidan elde edilebilecek en kucuk sayi = %d", yeniSayi);
	}
	if(sayiBir>sayiYuz && sayiYuz>sayiOn) {
		yeniSayi = sayiOn*100 + sayiYuz*10 + sayiBir;
		printf("Bu sayidan elde edilebilecek en kucuk sayi = %d", yeniSayi);
	}
	if(sayiBir>sayiOn && sayiOn>sayiYuz) {
		printf("Bu sayi zaten en kucugudur");
	}
	return 0;
}
