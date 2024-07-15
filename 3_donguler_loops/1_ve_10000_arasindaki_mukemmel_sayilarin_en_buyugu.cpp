#include <stdio.h>

int main() {
	int bolenlerin_toplami;
	int sayi;
	int bolen;
	int enbuyuk;
	
	for(int sayi = 1 ; sayi <= 10000 ; sayi++) {
		bolenlerin_toplami = 0;
		for(bolen = 1 ; bolen < sayi ; bolen++) {
			if(sayi % bolen == 0) {
				bolenlerin_toplami += bolen;
			}
		}
		if(bolenlerin_toplami == sayi){
			if(sayi > enbuyuk) {
				enbuyuk = sayi;
			}
		}
	}
	printf("Aranilan sayi : %d", enbuyuk);
	return 0;
}
