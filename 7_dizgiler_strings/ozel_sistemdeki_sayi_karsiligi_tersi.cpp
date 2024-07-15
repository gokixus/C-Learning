#include <stdio.h>
#include <string.h>

int main() {
	int sayi, i;
	printf("Onluk sistemdeki sayi giriniz: ");
	scanf("%d", &sayi);
	
	int yuzluk = sayi/100;
	int onluk = (sayi % 100) / 10;
	int birlik = sayi%10;
	
	char yeniSayi[51] = "";
	for(i = 0 ; i < yuzluk ; i++) {
		strcat(yeniSayi, "Z");
	}
	for(i = 0 ; i < onluk ; i++) {
		strcat(yeniSayi, "U");
	}
	for(i = 0 ; i < birlik ; i++) {
		strcat(yeniSayi, "I");
	}
	
	printf("Ozel sayi sistemindeki karsiligi: %s", yeniSayi);
	return 0;
}
