#include <stdio.h>

int main() {
	int sayi;
	printf("Sayiyi giriniz: ");
	scanf("%d", &sayi);
	
	int bolenlerin_toplami = 0;
	
	for(int bolen = 1 ; bolen < sayi ; bolen++) {
		if(sayi % bolen == 0) {
			bolenlerin_toplami += bolen;
		}
	}
	if(bolenlerin_toplami < sayi) {
		printf("Girilen sayi %d noksan sayidir", sayi);
	}
	else {
		printf("Girilen sayi %d noksan sayi degildir", sayi);
	}
	return 0;
}
