#include <stdio.h>

int main() {
	float sayi1, sayi2, sayi3, enBuyuk;
	
	printf("Sayilari giriniz(3 adet): ");
	scanf("%f%f%f", &sayi1, &sayi2, &sayi3);
	
	enBuyuk = sayi1;
	if(sayi2 > enBuyuk)
	    enBuyuk = sayi2;
	if(sayi3 > enBuyuk)
	    enBuyuk = sayi3;
	printf("Girilen sayilarin en buyugu %f dir", enBuyuk);
	return 0;
}
