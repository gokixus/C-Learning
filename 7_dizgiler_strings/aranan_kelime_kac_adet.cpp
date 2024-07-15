#include <stdio.h>
#include <string.h>
#include <ctype.h>

int sozcukSay(char *kelimeler, char *aranan) {
	int i, adet = 0;
	int len = strlen(kelimeler);
	for(i = 0 ; i < len ; i++) {
		if(isupper(kelimeler[i])) {
			kelimeler[i] = tolower(kelimeler[i]);
		}
	}
	char *araPtr = strstr(kelimeler, aranan);
	while(araPtr != NULL) {
		if((araPtr == kelimeler || !isalpha(araPtr[-1])) && (!isalpha(araPtr[strlen(aranan)]))) {
			adet++;
		}
		araPtr = strstr(araPtr+1, aranan);
	}
	return adet;
}

int main() {
	char metin[255], sozcuk[25];
	printf("Metni giriniz: ");
	fgets(metin, sizeof(metin), stdin);
	printf("Sozcuk giriniz: ");
	scanf("%s", sozcuk);
	int kacKez = sozcukSay(metin, sozcuk);
	printf("Bu sozcuk(%s) metinde %d kez gecmektedir.", sozcuk, kacKez);
	return 0;
}
