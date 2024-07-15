#include <stdio.h>

int main() {
	char ad[50];
	int harfSayisi = 0;
	printf("Ilin adini giriniz: ");
	scanf("%s", ad);
	while(ad[harfSayisi] != '\0') {
		harfSayisi++;
	}
	printf("Bu ad %d harften olusuyor.", harfSayisi);
	return 0;
}
