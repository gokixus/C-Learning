#include <stdio.h>

int main() {
	char ad[50];
	int i, harfSayisi = 0;
	printf("Adinizi giriniz: ");
	scanf("%s", ad);
	printf("Adinizin tersten yazilisi: ");
	while(ad[harfSayisi] != '\0') {
		harfSayisi++;
	}
	for(i = harfSayisi - 1 ; i >= 0 ; i--) {
		printf("%c", ad[i]);
	}
	return 0;
}
