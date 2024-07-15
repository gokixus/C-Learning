#include <stdio.h>

int ayristir(int saniye) {
	int saat, dakika, yeniSaniye;
	dakika = saniye / 60;
	saat = dakika / 60;
	dakika = dakika % 60;
	yeniSaniye = saniye % 60;
	if(saat > 0) {
		printf("Girilen %d saniye suna cevrildi : %d saat %d dakika %d saniye", saniye, saat, dakika, yeniSaniye);
	}
	else if(dakika > 0) {
		printf("Girilen %d saniye suna cevrildi : %d dakika %d saniye", saniye, dakika, yeniSaniye);
	}
	else {
		printf("Girilen %d saniye suna cevrildi : %d saniye", saniye, yeniSaniye);
	}
	

}

int main() {
	printf("ORNEK : \n");
	ayristir(7200);
	
	int sayi;
	printf("\n\nSaniye cinsinden sayiyi giriniz : ");
	scanf("%d", &sayi);
	ayristir(sayi);
	
	return 0;
}
