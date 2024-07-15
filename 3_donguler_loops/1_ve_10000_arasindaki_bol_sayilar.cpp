#include <stdio.h>

int main() {
	int bolen;
	int bolenlerin_toplami;
	int adet = 0;
	int sayi;
	
	printf("Aranilan sayilar: ");
	for(sayi = 1 ; sayi <= 10000 ; sayi++) {
		bolenlerin_toplami = 0;
		for(bolen = 1 ; bolen < sayi ; bolen++){
			if(sayi % bolen == 0 ){
				bolenlerin_toplami += bolen;
			}
		}
		if(bolenlerin_toplami > sayi) {
			printf("%d, ", sayi);
			adet++;
		}
	}
	printf("\n\nToplam adet = %d", adet);
	return 0;
}
