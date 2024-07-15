#include <stdio.h>

int main() {
	int sayi1, sayi2;
	printf("Lutfen birinci sayiyi giriniz: ");
	scanf("%d", &sayi1);	
	printf("Lutfen ikinci sayiyi giriniz: ");
	scanf("%d", &sayi2);
	
	int toplam = sayi1 + sayi2 ;
	printf("\nGirilen %d ve %d sayilarinin toplami %d dir", sayi1, sayi2, toplam);
	
	return 0;
}
