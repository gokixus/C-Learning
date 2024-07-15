#include <stdio.h>

int kodCoz(int kodPtr, char *boyutPtr, char *cinsiyetPtr, int *renkPtr) {
	int boyutlarIndex = kodPtr/10000;
	char boyutlar[] = {'S', 'M', 'L', 'X'};
	*boyutPtr = boyutlar[boyutlarIndex-1];

	int cinsiyetlerIndex = (kodPtr % 10000) / 1000;
	char cinsiyetler[] = {'E', 'K'};
	*cinsiyetPtr = cinsiyetler[cinsiyetlerIndex-1];
	
	*renkPtr = kodPtr % 1000;
}

int main() {
	int kod;
	printf("Urun kod numarasini giriniz(5 haneli): ");
	scanf("%d", &kod);
	while(0 < kod / 10000 && 4 < kod /10000) {
		printf("HATA!!! Urun kodu ilk rakamlari 1-4 arasinda olmalidir.\n");
		printf("Urun kod numarasini giriniz(5 haneli): ");
		scanf("%d", &kod);
	}
	while((kod % 10000) / 1000 != 1 && (kod % 10000) / 1000 != 2) {
		printf("HATA!!! Urun kodu ikinci rakamlari 1 veya 2 olmalidir.\n");
		printf("Urun kod numarasini giriniz(5 haneli): ");
		scanf("%d", &kod);
	}
	
	char boyut, cinsiyet;
	int renk;
	kodCoz(kod, &boyut, &cinsiyet, &renk);
	printf("\nBu urunun boyutu: %c\nCinsiyet: %c\nRenk Kodu: %d", boyut, cinsiyet, renk);
	return 0;
}
