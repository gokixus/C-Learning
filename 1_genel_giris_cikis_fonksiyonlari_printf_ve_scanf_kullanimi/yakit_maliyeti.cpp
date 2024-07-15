#include <stdio.h>

int main() {
	float yakit_t;
	float yakit_f;
	float toplam_yol;
	float maliyet;
	
	printf("Km basina yakit tuketimi(litre cinsinden): ");
	scanf("%f", &yakit_t);
	
	printf("1 litre yakitin fiyati(TL cinsinden): ");
	scanf("%f", &yakit_f);
	
	printf("Aracin katettigi toplam yol(km cinsinden): ");
	scanf("%f", &toplam_yol);
	
	maliyet = yakit_t*yakit_f*toplam_yol;
	printf("\n\nToplam yakit maliyeti %f TL'dir. ", maliyet);
	return 0;
}
