#include <stdio.h>

int main() {
	int sayi;
	printf("Yuvarlamak istediginiz sayiyi giriniz(5 basamakli): ");
	scanf("%d", &sayi);
	
	int sayiyuz, yuvar1, yuvar2;
	sayiyuz = sayi%1000;
	yuvar1 = ((sayi/1000)+1)*1000;
	yuvar2 = (sayi/1000)*1000;
	
	if(500<sayiyuz){
		printf("\nSayinin yuvarlatilmis hali = %d", yuvar1);
	}
	if(sayiyuz<=500) {
		printf("\nSayinin yuvarlatilmis hali = %d", yuvar2);
	}
	return 0;
}
