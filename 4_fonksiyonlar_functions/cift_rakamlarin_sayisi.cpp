#include <stdio.h>

int ciftrakamsay(int sayi) {
	int ciftrakamsayisi = 0;
	while(sayi > 0) {
		int rakam = sayi % 10;
		if(rakam % 2 == 0) {
			ciftrakamsayisi++;
		}
		sayi /= 10;
	}
	return ciftrakamsayisi;
}

int main() {
	printf("\nCift rakamlarin sayisi = %d", ciftrakamsay(27445));
	printf("\nCift rakamlarin sayisi = %d", ciftrakamsay(13579));
}
