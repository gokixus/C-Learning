#include <stdio.h>

int main () {
	int sure;
	printf("Sureyi giriniz(saniye cinsinden): ");
	scanf("%d", &sure);
	
	int dakika = sure / 60;
	int saat = dakika / 60;
	dakika = dakika % 60;
	sure = sure % 60;
	printf("\nBu sure %d saat %d dakika %d saniye eder.", saat, dakika, sure);
	return 0;
}
