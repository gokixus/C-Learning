#include <stdio.h>

int main() {
	int yaricap;
	int yukseklik;
	float sonuc;
	
		
	printf("Yuksekligi giriniz(cm): ");
	scanf("%d", &yukseklik);
	
	printf("Yaricapi giriniz(cm): ");
	scanf("%d", &yaricap);
	
	printf("Girilen degerler: yukseklik %d ve cap %d", yukseklik, yaricap);
	sonuc = 3.1419*yaricap*yaricap*yukseklik/3;
	printf("\n\nDairesel koninin hacmi: %f", sonuc);
	
}
