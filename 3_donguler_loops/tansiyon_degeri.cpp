#include <stdio.h>

int main() {
	int buyukTansiyon;
	int kucukTansiyon;
	int buyukT_adet_n = 0, buyukT_adet_k = 0, buyukT_adet_b = 0;
	int kucukT_adet_n = 0, kucukT_adet_k = 0, kucukT_adet_b = 0;
	
	printf("Tansiyon olcum programina hos geldiniz.\n(Durdurmak icin herhangi bir degeri sifir giriniz.");
	printf("\n-------------------------------------------\n");

	while(1) {
		printf("Tansiyon degerlerini giriniz(Buyuk ve kucuk) : ");
		scanf("%d%d", &buyukTansiyon, &kucukTansiyon);
		if(buyukTansiyon == 0 || kucukTansiyon == 0) {
			printf("-------------------------------------------\n");
			printf("Program sona erdi.");
			break;
		}
		if(120 <= buyukTansiyon && buyukTansiyon <= 140) {
			printf("Buyuk normal, ");
			buyukT_adet_n++;
		}
		else if(120 > buyukTansiyon) {
			printf("Buyuk dusuk, ");
			buyukT_adet_k++;
		}
		else if(140 < buyukTansiyon) {
			printf("Buyuk yuksek, ");
			buyukT_adet_b++;
		}
		if(70 <= kucukTansiyon && kucukTansiyon <= 90) {
			printf("Kucuk normal\n");
			kucukT_adet_n++;
		}
		else if(70 > kucukTansiyon) {
			printf("Kucuk dusuk\n");
			kucukT_adet_k++;
		}
		else if(90 < kucukTansiyon) {
			printf("Kucuk yuksek\n");
			kucukT_adet_b++;
		}
	}
	printf("\nBuyuk (Normal = %d, Yuksek = %d, Dusuk = %d adet)", buyukT_adet_n, buyukT_adet_b, buyukT_adet_k);
	printf("\nKucuk (Normal = %d, Yuksek = %d, Dusuk = %d adet)", kucukT_adet_n, kucukT_adet_b, kucukT_adet_k);
	
	return 0;
}
