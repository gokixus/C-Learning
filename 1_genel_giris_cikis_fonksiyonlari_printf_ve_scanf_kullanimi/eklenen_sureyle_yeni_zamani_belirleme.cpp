#include <stdio.h>

int main() {
    int saat;
	int dakika;
	int saniye;
	printf("Zamani giriniz: \n");
	printf("\nSaati giriniz: ");
	scanf("%d", &saat);
	printf("Dakikayi giriniz: ");
	scanf("%d", &dakika);
	printf("Saniyeyi giriniz: ");
	scanf("%d", &saniye);
	
	int sonuc;
	sonuc = saat*60*60 + dakika*60 + saniye;
	printf("\nToplam %d saniye", sonuc);
	
	int sure;
	printf("\nEklenecek sureyi ekleyin(saniye): ");
	scanf("%d", &sure);
	
	int yeniSonuc = sonuc+sure;
	int yeniDakika = yeniSonuc / 60;
	int yeniSaat = yeniDakika / 60;
	yeniDakika = yeniDakika % 60;
	yeniSonuc = yeniSonuc % 60;
	printf("\nBu yeni sure %d saat %d dakika %d saniye eder.", yeniSaat, yeniDakika, yeniSonuc);
	return 0;
}
