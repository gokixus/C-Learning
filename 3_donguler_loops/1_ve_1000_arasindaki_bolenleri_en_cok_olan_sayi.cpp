#include <stdio.h>

int main() {
	int bolen;
	int sayi;
	int max_bolen = 1;
	int adet;
	int max_adet = 0;
	
	for(sayi = 1 ; sayi <= 1000 ; sayi++) {
		adet = 0;
		for(bolen = 1 ; bolen <= sayi ; bolen++) {
			if(sayi % bolen == 0) {
			    adet++;
			}
		}
		if(adet > max_adet){
			max_adet = adet;
			max_bolen = sayi;
		}
	}
	printf("Boleni en cok olan sayi %d (Bolen sayisi %d) ", max_bolen, max_adet);
	return 0;
}

