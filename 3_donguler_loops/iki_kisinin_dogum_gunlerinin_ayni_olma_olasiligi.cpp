#include <stdio.h>

int main() {
	int kisi;
	
	
	while(1) {
		printf("Kisi sayisi : ");
		scanf("%d", &kisi);
		
		if(kisi < 0) {
			printf("Negatif sayi girdiniz!!! pozitif sayi girmelisiniz.\n\n");
			printf("Kisi sayisi : ");
			scanf("%d", &kisi);
		}
		else if(kisi == 0) {
			printf("Sifir deger giremezsiniz. Gireceginiz deger 1 ve uzeri olmalidir\n\n");
			printf("Kisi sayisi : ");
			scanf("%d", &kisi);
		}
	
		double olasilik = 1.0;
		for(int i = 1; i <= kisi ; i++) {
			olasilik *= (365.0 - i + 1)/366; 
		}
		olasilik = 1 - olasilik;
		printf("Iki kisinin dogum gunlerinin ayni olma olasiligi : %f\n\n", olasilik);
	}
	return 0;
}
