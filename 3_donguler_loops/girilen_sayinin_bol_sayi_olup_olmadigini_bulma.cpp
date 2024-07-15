#include <stdio.h>

int main() {
	int bolenlerin_toplami = 0;
	int sayi;
	printf("Sayiyi giriniz : ");
	scanf("%d", &sayi);
	for(int bolen = 1 ; bolen < sayi ; bolen++)  {
		if(sayi % bolen == 0) {
			bolenlerin_toplami += bolen;
		}
	}
	if(bolenlerin_toplami > sayi) {
		printf("Girilen sayi %d bol sayidir", sayi);
	}
	else {
		printf("Girilen sayi %d bol sayi degildir", sayi);
	}
	return 0;
}
