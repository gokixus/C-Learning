#include <stdio.h>

int main() {
	int konuk;
	printf("Konugun yasini giriniz: ");
	scanf("%d", &konuk);
	
	int talip;
	int genc = 0;
	int yasli = 0;
	int denk = 0;
	float toplam = 0;
	float kisi= 0;
	
	while (1) {
		printf("Talibin yasini giriniz(cikis icin 0): ");
		scanf("%d", &talip);
		
		if(talip == 0) {
			break;
		}
		if(talip < 0) {
			printf("Negatif bir sayi girdiniz. Lutfen tekrar deneyiniz.\n");
			continue;
		}
		
		kisi++;
		toplam = toplam + talip;
		
		if(talip<konuk){
		    genc++;
		}
		else if(talip>konuk) {
			yasli++;
		}
		else {
			denk++;
		}
	}
	float yas_ortalama = toplam/kisi;
	if(kisi>0) {
	    printf("\nKonuktan daha yasli taliplerin sayisi = %d", yasli);
	    printf("\nKonuktan daha genc taliplerin sayisi = %d", genc);
	    printf("\nKonuga denk taliplerin sayisi = %d", denk);
	    printf("\n\nTaliplerin yas ortalamasi = %0.2f", yas_ortalama);
	}
	else {
		printf("Hic talip yok");
	}
	return 0;
}
