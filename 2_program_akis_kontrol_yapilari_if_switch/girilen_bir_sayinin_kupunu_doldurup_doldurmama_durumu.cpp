#include <stdio.h>

int main() {
	int sayi;
	printf("4 basamakli bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	int a, b, c, d;
	a = sayi/1000;
	b = (sayi/100)%10;
	c = (sayi/10)%10;
	d = sayi%10;
	
	int toplam;
	toplam = a + b + c + d;
	int kupu;
	kupu = toplam*toplam*toplam;
	
	if(sayi == kupu)
	    printf("\nGirilen %d sayisi kupunu dolduran sayidir.", sayi);
	else
	    printf("\nGirilen %d sayisi kupunu dolduran sayi degildir.", sayi);
}
