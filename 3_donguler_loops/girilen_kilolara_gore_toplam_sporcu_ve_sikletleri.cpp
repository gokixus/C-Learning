#include <stdio.h>

int main() {
	int kilo;
	float toplam_adet = 0;
	int hafif_adet = 0;
	int agir_adet = 0;
	int orta_adet = 0;
	float toplam_kilo = 0;
	float genel_ortalama;
	
	while(1) {
		printf("Kilo giriniz : ");
		scanf("%d", &kilo);
		toplam_adet++;
		

		if(kilo == 0) {
			break;
		}
		else if(kilo < 0) {
			printf("Yanlislikla negatif deger girdiniz lutfen tekrar deneyiniz\n");
			toplam_adet--;
			continue;
		}
		
		toplam_kilo += kilo;
		genel_ortalama = toplam_kilo/toplam_adet;
		
		if(kilo < 50) {
			hafif_adet++;
		}
		else if(50 <= kilo && kilo < 70) {
			orta_adet++;
		}
		else {
			agir_adet++;
		}
 
	}

	printf("\nToplam %d adet sporcu girilmistir", toplam_adet);
	printf("\n%d hafif, %d orta ve %d agir siklet vardir", hafif_adet, orta_adet, agir_adet);
	printf("\nGenel ortalama %0.2f dir", genel_ortalama);
}
