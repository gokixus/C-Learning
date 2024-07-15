#include <stdio.h>
#include <string.h>

int farkiSay(char *kelime1, char *kelime2) {
	int fark = 0, i;
	for(i = 0 ; i < strlen(kelime1) ; i++) {
		if(kelime1[i] != kelime2[i] ) {
			fark++;
		}
	}
	return fark;
}

int main() {
	char ilkKelime[50], sonrakiKelime[50];
	printf("Ilk kelimeyi giriniz: ");
	scanf("%s", ilkKelime);
	while(1) {
		printf("Sonraki kelimeyi giriniz: ");
		scanf("%s", sonrakiKelime);
		if(farkiSay(ilkKelime, sonrakiKelime) != 1) {
			printf(" (2 harf farkli zincir bozuldu.)");
			break;
		} else {
			printf(" (1 harf farkli zincir bozulmadi.)\n");
			strcpy(ilkKelime, sonrakiKelime);
		}
	}
	printf("\nProgram sona erdi!\n");
	return 0;
}
