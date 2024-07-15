#include <stdio.h>

int main() {
    int saat;
	int dakika;
	int saniye;
	printf("Zamani giriniz: \n");
	printf("\nSaati giriniz: ");
	scanf("%d", &saat);
	printf("\nDakikayi giriniz: ");
	scanf("%d", &dakika);
	printf("\nSaniyeyi giriniz: ");
	scanf("%d", &saniye);
	
	int sonuc;
	sonuc = saat*60*60 + dakika*60 + saniye;
	printf("Toplam %d saniye", sonuc);
	return 0;
}
