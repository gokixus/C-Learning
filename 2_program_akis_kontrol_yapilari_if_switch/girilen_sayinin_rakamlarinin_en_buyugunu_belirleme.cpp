#include <stdio.h>

int main() {
	int sayi;
	printf("Sayiyi giriniz(3 basamakli): ");
	scanf("%d", &sayi);
	
	int sayiyuz = (sayi/100)%10;
	int sayion = (sayi/10)%10;
	int sayibir = sayi%10;
	
	if(sayiyuz>sayion && sayion>sayibir){
		printf("\nGirilen %d sayinin en buyuk rakami sagdan 3. rakamdir(%d)", sayi, sayiyuz);
	}
	if(sayiyuz>sayibir && sayibir>sayion){
		printf("\nGirilen %d sayinin en buyuk rakami sagdan 3. rakamdir(%d)", sayi, sayiyuz);
	}
	if(sayion>sayiyuz && sayiyuz>sayibir){
		printf("\nGirilen %d sayinin en buyuk rakami sagdan 2. rakamdir(%d)", sayi, sayion);
	}
	if(sayion>sayibir && sayibir>sayiyuz){
		printf("\nGirilen %d sayinin en buyuk rakami sagdan 2. rakamdir(%d)", sayi, sayion);
	}
	if(sayibir>sayion && sayion>sayiyuz){
		printf("\nGirilen %d sayinin en buyuk rakami sagdan 1. rakamdir(%d)", sayi, sayibir);
	}
	if(sayibir>sayiyuz && sayiyuz>sayion){
		printf("\nGirilen %d sayinin en buyuk rakami sagdan 1. rakamdir(%d)", sayi, sayibir);
	}
	return 0;
}
