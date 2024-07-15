#include <stdio.h>

int yavruSayisiCinsiyetiBul(float sicaklikPtr, int yumurtaPtr, char *cinsiyetPtr, int *yavruPtr) {
	if(28 <= sicaklikPtr && sicaklikPtr < 31) {
		*cinsiyetPtr = 'D';
	}
	else if(31 <= sicaklikPtr && sicaklikPtr <= 34) {
		*cinsiyetPtr = 'E';
	}
	
	*yavruPtr = yumurtaPtr - yumurtaPtr*10/100;
}

int main() {
	float sicaklik;
	int yumurta;
	printf("Kulucka sicakligi giriniz (C): ");
	scanf("%f", &sicaklik);
	while(sicaklik < 28 || 34 < sicaklik) {
		printf("HATA !!! 28-34 arasinda bir deger giriniz: ");
		scanf("%f", &sicaklik);
	}
	
	printf("Yumurta sayisini giriniz: ");
	scanf("%d", &yumurta);
	
	char cinsiyet;
	int yavru;
	yavruSayisiCinsiyetiBul(sicaklik, yumurta, &cinsiyet, &yavru);
	printf("\nCikacak yavrularin cinsiyeti(D: Disi, E: Erkek) : %c\nCikacak yavru sayisi: %d", cinsiyet, yavru);
	return 0;
}
