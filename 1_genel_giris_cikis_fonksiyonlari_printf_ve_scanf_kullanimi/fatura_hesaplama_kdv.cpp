#include <stdio.h>

int main() {
	float tutar;
	float kdv;
	float kdv_haric_mal_bedeli;
	
	printf("KDV dahil toplam tutari giriniz: ");
	scanf("%f", &tutar);
	
	printf("KDV oranini giriniz: ");
	scanf("%f", &kdv);
	
	printf("------------------------------------------------\n");
	
	kdv_haric_mal_bedeli = tutar / (1+(kdv/100));
	printf("KDV haric mal hizmet bedeli: %f", kdv_haric_mal_bedeli);
	
    float kdv_fiyat = tutar - kdv_haric_mal_bedeli;
    printf("\nKDV fiyati: %f", kdv_fiyat);
	
	return 0;
}
