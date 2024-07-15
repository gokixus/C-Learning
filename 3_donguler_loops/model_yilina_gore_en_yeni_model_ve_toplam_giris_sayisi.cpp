#include <stdio.h>

int main() {
	int model;
	int toplam = 0;
	int yeni_model;
	do{
		printf("Model yilini giriniz(Durdurmak icin 0 ) : ");
		scanf("%d", &model);
		
		if(model == 0 ){
			break;
		}
		else if( model < 1000) {
			printf("HATA!!! Lutfen 4 haneli deger giriniz.\n");
			continue;
		}
		else if( 2023 < model) {
			printf("HATA!!! Lutfen gunumuzden onceki yillarini(2023 ve oncesi) yaziniz. \n");
			continue;
		}		
		if(model > yeni_model) {
			yeni_model = model;
			toplam = 1;
		}
		else if(model == yeni_model) {
			toplam++;
		}
		
	} while (1);
	printf("\n----------------------------------------------------------------------------\n");
	printf("En yeni model %d (Toplamda %d giris yapti)", yeni_model , toplam);
	return 0;
}
