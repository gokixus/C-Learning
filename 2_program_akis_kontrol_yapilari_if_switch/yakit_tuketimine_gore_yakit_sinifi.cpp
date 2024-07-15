#include <stdio.h>

int main() {
	float sehir_ici;
    float sehirDisi;
    printf("Aracin sehir ici yakit tuketim miktarini giriniz: ");
    scanf("%f", &sehir_ici);
    printf("Aracin sehir disi yakit tuketim miktarini giriniz: ");
    scanf("%f", &sehirDisi);
    
    float ortalamaYakit;
    ortalamaYakit = sehir_ici*55/100 + sehirDisi*45/100;
    printf("\nOrtalama yakit tuketimi: %0.2f litre", ortalamaYakit);
    
    if(ortalamaYakit<3) {
    	printf("\nYakit tuketim sinifi: Cok az");
	}
	if(3<=ortalamaYakit && ortalamaYakit<6) {
    	printf("\nYakit tuketim sinifi: Ekonomik");
	}
	if(6<=ortalamaYakit && ortalamaYakit<8) {
    	printf("\nYakit tuketim sinifi: Fazla");
	}
	if(8<=ortalamaYakit) {
    	printf("\nYakit tuketim sinifi: Cok fazla");
	}
	return 0;
}
