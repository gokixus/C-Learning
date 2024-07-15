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
		printf("Bu sayi zaten en buyugudur");
	}
	if(sayiYuz>sayiBir && sayiBir>sayiOn) {
		yeniSayi = sayiYuz*100 + sayiBir*10 + sayiOn;
		printf("Bu sayidan elde edilebilecek en buyuk sayi = %d", yeniSayi);
	}
	if(sayiOn>sayiYuz && sayiYuz>sayiBir) {
		yeniSayi = sayiOn*100 + sayiYuz*10 + sayiBir;
		printf("Bu sayidan elde edilebilecek en buyuk sayi = %d", yeniSayi);
	}
	if(sayiOn>sayiBir && sayiBir>sayiYuz) {
		yeniSayi = sayiOn*100 + sayiBir*10 + sayiYuz;
		printf("Bu sayidan elde edilebilecek en buyuk sayi = %d", yeniSayi);
	}
	if(sayiBir>sayiYuz && sayiYuz>sayiOn) {
		yeniSayi = sayiBir*100 + sayiYuz*10 + sayiOn;
		printf("Bu sayidan elde edilebilecek en buyuk sayi = %d", yeniSayi);
	}
	if(sayiBir>sayiOn && sayiOn>sayiYuz) {
		yeniSayi = sayiBir*100 + sayiOn*10 + sayiYuz;
		printf("Bu sayidan elde edilebilecek en buyuk sayi = %d", yeniSayi);
	}
	return 0;
}
