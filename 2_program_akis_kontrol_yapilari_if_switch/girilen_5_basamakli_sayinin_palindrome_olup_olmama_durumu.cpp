#include <stdio.h>

int main() {
	int sayi;
	printf("5 basamakli bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	float sayiOn_Binlik;
	float sayiBinlik;
	float sayiOnluk;
	float sayiBirlik;
	
	sayiOn_Binlik = (sayi/10000)%10;
	sayiBinlik = (sayi/1000)%10;
	sayiOnluk = (sayi/10)%10;
	sayiBirlik = sayi%10;
	
	if(sayiOn_Binlik == sayiBirlik && sayiBinlik == sayiOnluk)
	    printf("\nGirilen %d sayisi palindrome bir sayidir", sayi);
	else
	    printf("\nGirilen %d sayisi palindrome bir sayi degildir.", sayi);
	
	return 0;    
}
