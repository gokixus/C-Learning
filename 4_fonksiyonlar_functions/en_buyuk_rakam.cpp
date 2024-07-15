#include <stdio.h>

int enbuyuk(int sayi) {
	int enBuyuk = sayi%10;
	while(sayi > 0) {
		int rakam = sayi%10;
		if(rakam > enBuyuk) {
			enBuyuk = rakam;
		}
		sayi /= 10;
	}
	return enBuyuk;
}

int main() {
	printf("\n%d", enbuyuk(94571));
	printf("\n%d", enbuyuk(33));
}
