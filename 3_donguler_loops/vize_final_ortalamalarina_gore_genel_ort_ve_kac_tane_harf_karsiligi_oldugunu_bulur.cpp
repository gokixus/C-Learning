#include  <stdio.h>

int main() {
	int mevcut;
	printf("Sinif mevcudu kactir? : ");
	scanf("%d", &mevcut);
	float genel_ort;
	float toplam_ort;
	int a_adet = 0;
	int b_adet = 0;
	int c_adet = 0;
	int f_adet = 0;
	int vize, final;
	
	for(int i = 1 ; i <= mevcut ; i++) {
		printf("%d. ogrencinin vize ve finali : ", i);
		scanf("%d%d", &vize, &final);
		genel_ort = (vize*0.4 + final*0.6)/25;
		toplam_ort += genel_ort;
		
		if(vize < 0 || final < 0 || vize > 100 || final > 100) {
			printf("YANLIS!!! Lutfen 0-100 arasýnda deger giriniz\n");
			i--;
		}
		else if(genel_ort >= 3.5) {
			a_adet++;
		}
		else if(3.5 > genel_ort && genel_ort >= 2.5) {
			b_adet++;
		}
		else if(2.5 > genel_ort && genel_ort >= 2) {
			c_adet++;
		}
		else {
			f_adet++;
		}
	}
	printf("%d tane F\n", f_adet);
	printf("%d tane C\n", c_adet);
	printf("%d tane B\n", b_adet);
	printf("%d tane A\n", a_adet);
	printf("Genel ortalama = %0.2f", toplam_ort/mevcut);
	return 0;
}
