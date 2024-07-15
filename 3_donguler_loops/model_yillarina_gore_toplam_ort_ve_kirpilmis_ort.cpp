#include <stdio.h>

int main() {
	int model;
	int toplam_adet = 0;
	int toplam_model = 0;
	float ortalama;
	float kirpilmis_ort;
	int enBuyukModel = 1;
	int enKucukModel = 9999;
	
	while(1) {
		printf("Model yilini giriniz(Durdurmak icin 0) : ");
		scanf("%d", &model);
		
		if(model == 0) {
			printf("\nProgram sonlandiriliyor...\n");
			break;
		}
		else if(model < 0 || 9999 < model)  {
			printf("HATA !!! LUTFEN 4 HANELI GIRINIZ\n");
		}
		else {
			toplam_adet++;
			toplam_model += model;
			if(model > enBuyukModel) {
				enBuyukModel = model;
			}
			if(model < enKucukModel) {
				enKucukModel = model;
			}
		}
	}
	ortalama = toplam_model / toplam_adet;			
	kirpilmis_ort = (toplam_model - enBuyukModel - enKucukModel) / (toplam_adet - 2);
	printf("Toplam %d tane arac giris yapti.\n", toplam_adet);
	printf("Ortalama = %0.2f, Kirpilmis Ortalama = %0.2f", ortalama, kirpilmis_ort);
	return 0;
}
