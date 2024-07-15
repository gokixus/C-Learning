#include <stdio.h>

int main() {
	char tip;
	printf("---------MENU---------\n");
	printf("(D veya d) Daire\n(T veya T) Dikdortgen\n(K veya k) Kare\n(U veya u) Ucgen\n----------------------\nSeciminiz: ");
	scanf("%c", &tip);
	int daire, dikdortgenKisa, dikdortgenUzun, kare, ucgenTaban, ucgenYukseklik;
	float pi = 3.14159;
	float daireAlan;
	int kareAlan;
	int dikdortgenAlan;
	int ucgenAlan;
	
	switch(tip) {
		case 'K':
		case 'k':
			printf("----------------------\n");
			printf("Karenin tek kenar uzunlugunu giriniz(cm): ");
			scanf("%d", &kare);
			kareAlan = kare*kare;
			printf("Kenari %d olan karenin alani = %d", kare, kareAlan);
			break;
		case 'D':
		case 'd':
			printf("----------------------\n");
			printf("Dairenin yaricap uzunlugunu giriniz(cm): ");
			scanf("%d", &daire);
			daireAlan = pi*daire*daire;
			printf("Yaricapi %d olan karenin alani = %0.2f ", daire, daireAlan);
			break;
		case 'T':
		case 't':
			printf("----------------------\n");
			printf("Dikdortgenin kisa kenar uzunlugunu giriniz(cm): ");
			scanf("%d", &dikdortgenKisa);
			printf("Dikdortgenin uzun kenar uzunlugunu giriniz(cm): ");
			scanf("%d", &dikdortgenUzun);
			dikdortgenAlan = dikdortgenKisa*dikdortgenUzun;
			printf("Kisa kenari %d ve uzun kenari %d olan dikdortgenin alani = %d ", dikdortgenKisa, dikdortgenUzun, dikdortgenAlan);
			break;
		case 'U':
		case 'u':
			printf("----------------------\n");
			printf("Ucgenin taban uzunlugunu giriniz(cm): ");
			scanf("%d", &ucgenTaban);
			printf("Ucgenin yukseklik uzunlugunu giriniz(cm): ");
			scanf("%d", &ucgenYukseklik);
			ucgenAlan = ucgenTaban*ucgenYukseklik/2;
			printf("Tabani %d ve yukseklikligi %d olan ucgenin alani = %d", ucgenTaban, ucgenYukseklik, ucgenAlan);
			break;
		default:
			printf("\nYanlis harf girdiniz!!!\nLutfen dogru harf giriniz");
	}
	return 0;
}
