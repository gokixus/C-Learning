#include <stdio.h>

int main() {
	float odenen_tutar;
	int kdv;
	float gaz_fiyat;
	printf("Lutfen odenecek toplam tutari giriniz: ");
	scanf("%f", &odenen_tutar);
	printf("Lutfen alinan kdv oranini giriniz: ");
	scanf("%d", &kdv);
	printf("Lutfen gazin metrekup fiyatini giriniz: ");
	scanf("%f", &gaz_fiyat);
	
	float kdv_tutari = odenen_tutar*kdv/100;
	printf("\nHesaplanan KDV: %f", kdv_tutari);
	
	float gaz_bedeli = odenen_tutar - kdv_tutari;
	printf("\nGaz bedeli : %f", gaz_bedeli);
	printf("\nGazin metrekup fiyati: %f", gaz_fiyat);
	
	float hakedilen_gaz = gaz_bedeli/gaz_fiyat;
	printf("\n\nHak edilen gaz: %f metrekup", hakedilen_gaz);
	
	return 0;
	
}
