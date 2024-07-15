#include <stdio.h>

int main() {
	int marka;
	int en_cok_gelen_marka = 0;
	int en_cok_gelen = 0;
	int en_cok_satilan_marka = 0;
	float tutar;
	float en_yuksek_satis = 0;
	float renault_satis = 0;
	float mazda_satis = 0;
	float honda_satis = 0;
	float ford_satis = 0;
	int renault_adet = 0;
	int mazda_adet = 0;
	int honda_adet = 0;
	int ford_adet = 0;
	
	printf("ARABA MARKASI\t\tARAC KODU\n");
	printf("Renault\t\t\t1\n");
	printf("Mazda\t\t\t2\n");
	printf("Honda\t\t\t3\n");
	printf("Ford\t\t\t4\n\n");
	
	while(1) {
		printf("Araba markasi ve tutar giriniz : ");
		scanf("%d%f", &marka, &tutar);
		
		if(marka == 111) {
			printf("PROGRAM SONA ERDI\n");
			printf("\n--------------OZET-BILGILER----------------\n");
			printf("En cok gelen arac marka ");
			if(en_cok_gelen == 1){
				printf("Renault (%d kez)\n", en_cok_gelen_marka);
			}
			else if(en_cok_gelen == 2){
				printf("Mazda (%d kez)\n", en_cok_gelen_marka);
			}
			else if(en_cok_gelen == 3){
				printf("Honda (%d kez)\n", en_cok_gelen_marka);
			}
			else if(en_cok_gelen == 4){
				printf("Ford (%d kez)\n", en_cok_gelen_marka);
			}
			printf("En cok satis yapilan arac marka ");
			if(en_cok_satilan_marka == 1) {
				printf("Renault (%0.2f TL)", en_yuksek_satis);
			}
			else if(en_cok_satilan_marka == 2) {
				printf("Mazda (%0.2f TL)", en_yuksek_satis);
			}
			else if(en_cok_satilan_marka == 3) {
				printf("Honda (%0.2f TL)", en_yuksek_satis);
			}
			else if(en_cok_satilan_marka == 4) {
				printf("Ford (%0.2f TL)", en_yuksek_satis);
			}
			break;
		}
		
		switch(marka) {
			case 1:
				renault_adet++;
				if(renault_adet > en_cok_gelen_marka) {
					en_cok_gelen_marka = renault_adet;
					en_cok_gelen = 1;
				}
				renault_satis += tutar;
				if(renault_satis > en_yuksek_satis) {
					en_yuksek_satis = renault_satis;
					en_cok_satilan_marka = 1;
				}
				break;
			case 2:
				mazda_adet++;
				if(mazda_adet > en_cok_gelen_marka) {
					en_cok_gelen_marka = mazda_adet;
					en_cok_gelen = 2;
				}
				mazda_satis += tutar;
				if(mazda_satis > en_yuksek_satis) {
					en_yuksek_satis = mazda_satis;
					en_cok_satilan_marka = 2;
				}
				break;
			case 3:
				honda_adet++;
				if(honda_adet > en_cok_gelen_marka) {
					en_cok_gelen_marka = honda_adet;
					en_cok_gelen = 3;
				}
				honda_satis += tutar;
				if(honda_satis > en_yuksek_satis) {
					en_yuksek_satis = honda_satis;
					en_cok_satilan_marka = 3;
				}
				break;
			case 4:
				ford_adet++;
				if(ford_adet > en_cok_gelen_marka) {
					en_cok_gelen_marka = ford_adet;
					en_cok_gelen = 4;
				}
				ford_satis += tutar;
				if(ford_satis > en_yuksek_satis) {
					en_yuksek_satis = ford_satis;
					en_cok_satilan_marka = 4;
				}
				break;
			default:
				printf("GECERSIZ MARKA KODU !!!\n\n");
				break;
		}
	}
	return 0;
}
