#include <stdio.h>

int main() {
	int eleman, i, j, yedek;
	printf("Eleman sayisini giriniz : ");
	scanf("%d", &eleman);
	if(eleman > 50) {
		printf("Eleman sayisi 50'den fazla olmamalidir.\n");
		printf("Eleman sayisini giriniz : ");
		scanf("%d", &eleman);
	}
	
	int kod[eleman], kodun_sayisi[eleman];
	for(i = 0 ; i < eleman ; i++) {
		printf("%d. esyanin kodu ve sayisi: ", i+1);
		scanf("%d%d", &kod[i], &kodun_sayisi[i]);
	}
	
	for(i = 0 ; i < eleman ; i++) {
		for(j = 0 ; j < eleman ; j++) {
			if(kodun_sayisi[i] > kodun_sayisi[j]) {
				yedek = kodun_sayisi[i];
				kodun_sayisi[i] = kodun_sayisi[j];
				kodun_sayisi[j] = yedek;
				
				yedek = kod[i];
				kod[i] = kod[j];
				kod[j] = yedek;
			}
		}	
	}
	
	printf("Esyalar Sirali \n");
	printf("Kodlar\t : ");
	for(i = 0 ; i < eleman ; i++) {
		printf("%d\t", kod[i]);
	}
	printf("\nSayilari : ");
	for(i = 0 ; i < eleman ; i++) {
		printf("%d\t", kodun_sayisi[i]);
	}
	
	return 0;
	
}
