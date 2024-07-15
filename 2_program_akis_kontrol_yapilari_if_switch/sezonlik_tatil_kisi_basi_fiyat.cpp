#include <stdio.h>

int main() {
	int sayi1, sayi2;
	printf("Hangi ayda ve kac kisi tura katilacaksiniz ? : ");
	scanf("%d%d", &sayi1, &sayi2);
	
	int kisibas;
	
	switch(sayi1) {
		case 3:
		case 4:
		case 5:
			kisibas = sayi2*50;
			printf("Toplam borcunuz: %d", kisibas);
			break;
		case 6:
		case 7:
		case 8:
			kisibas = sayi2*250;
			printf("Toplam borcunuz: %d", kisibas);
			break;
		case 9:
		case 10:
		case 11:
			kisibas = sayi2*50;
			printf("Toplam borcunuz: %d", kisibas);
			break;
		case 12:
		case 1:
		case 2:
			kisibas = sayi2*150;
			printf("Toplam borcunuz: %d", kisibas);
			break;
	    default:
	    	printf("Yanlis ay degerini girdiniz!!!");
	}
	return 0;
}
