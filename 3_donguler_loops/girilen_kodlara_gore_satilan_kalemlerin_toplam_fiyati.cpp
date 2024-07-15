#include <stdio.h>

int main() {
	int kod;
	int kirmizi = 0;
	int lacivert = 0;
	int beyaz = 0;
	int mavi = 0;
	int sari = 0;
	
	printf("Kirmizi icin urun kodu: 11\n");
	printf("Lacivert icin urun kodu: 12\n");
	printf("Beyaz icin urun kodu: 13\n");
	printf("Mavi icin urun kodu: 14\n");
	printf("Sari icin urun kodu: 15\n\n");
	
	while(1) {
		printf("Kalemlerin urun kodlarini girin(Durdurmak icin 111): ");
		scanf("%d", &kod);
		
		if(kod==111) {
			break;
		}
		else if(kod==11) {
			kirmizi++;
		}
		else if(kod==12) {
			lacivert++;
		}
		else if(kod==13) {
			beyaz++;
		}
		else if(kod==14) {
			mavi++;
		}
		else if(kod==15) {
			sari++;
		}
		else {
			printf("HATA!!! Gecerli bir kod giriniz. \n");
		}
	}
	float toplam;
	toplam = kirmizi*1.5 + lacivert*2.5 + beyaz*3.0 + mavi*4.5 + sari*5;
	printf("Gun sonu satis kazanciniz = %0.2f", toplam);
}
