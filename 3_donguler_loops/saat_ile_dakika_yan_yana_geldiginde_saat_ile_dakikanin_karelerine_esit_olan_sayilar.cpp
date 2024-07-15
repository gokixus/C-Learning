#include <stdio.h>

int main() {
	int saat;
	int dakika;
	int toplam;
	
	printf("Yan yana gelindiginde kareleri esit olan sayilar: \n");
	for(saat = 0 ; saat < 24 ; saat++) {
		for(dakika = 0 ; dakika < 60 ; dakika++) {
			toplam = (saat*saat) + (dakika*dakika);
			if(toplam == (saat*100) + dakika) {
				printf("%02d : %02d\n", saat, dakika);
			}
		}
	}
	return 0;
}
