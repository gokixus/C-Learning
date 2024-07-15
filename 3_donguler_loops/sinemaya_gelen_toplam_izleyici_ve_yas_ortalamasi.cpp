#include <stdio.h>

int main() {
	int yas;
	int enbuyuk_yas = 1;
	int enkucuk_yas = 1000;
	int toplam = 0;
	int izleyici_adet = 0;
	int ortalama;
	int kirpilmis_ort;
	
	while(1) {
		printf("Yasi giriniz(Durdurmak icin 0) : ");
		scanf("%d", &yas);
		
		if(yas == 0) {
			break;
		}
		else if(yas < 0 || 1000 <= yas) {
			printf("Hata!!! Lutfen yas degerine dikkat ediniz.\n");
			continue;
		}
		else {
			toplam += yas;
			izleyici_adet++;
			if(yas > enbuyuk_yas) {
				enbuyuk_yas = yas;
			}
			if(yas < enkucuk_yas) {
				enkucuk_yas = yas;
			}
		}
	}
	ortalama = toplam / izleyici_adet;
	kirpilmis_ort = (toplam - enbuyuk_yas - enkucuk_yas) / (izleyici_adet - 2);
	printf("\nToplam %d tane izleyici giris yapti.\n", izleyici_adet);
	printf("En buyuk yaslari %d ve en kucuk yaslari %d\n", enbuyuk_yas, enkucuk_yas);
	printf("Ortalama = %d, Kirpilmis ortalama = %d", ortalama, kirpilmis_ort);
	
	return 0;
}
