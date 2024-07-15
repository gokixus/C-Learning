#include <stdio.h>

int main() {
	int sayi;
	int bolen;
	int enbuyuksayi;
	
	for(sayi = 1000 ; sayi <= 9999 ; sayi++) {
		int bolenlerin_toplami = 0;
		for(bolen = 1 ; bolen < sayi ; bolen++) {
			if(sayi % bolen == 0) {
			    bolenlerin_toplami += bolen;
			}
		}
		if(bolenlerin_toplami > sayi) {
			if(sayi % 2 != 0) {
				if(sayi > enbuyuksayi){
					enbuyuksayi = sayi;
				}			
			}
		}
	}
	printf("Aranilan sayi : %d", enbuyuksayi);
	return 0;
}
