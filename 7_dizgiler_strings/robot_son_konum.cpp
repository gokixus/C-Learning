#include <stdio.h>
#include <string.h>
#include <ctype.h>

int hesapla(char*, int*,int*,int*);

int main() {
	char komut[50];
	printf("Robot icin komut dizgisini giriniz: ");
	fgets(komut, sizeof(komut), stdin);
	komut[strcspn(komut, "\n")] = '\0';
	
	int bekleme = 0, sonKonumX = 0, sonKonumY = 0;
	hesapla(komut, &bekleme, &sonKonumX, &sonKonumY);
	printf("Bekleme sayisi\t= %d\nSon konumu\t= (%d, %d)", bekleme, sonKonumX, sonKonumY);
	return 0;
}

int hesapla(char *dizgi, int *b, int *x, int *y) {
	for(int i = 0 ; i < strlen(dizgi) ; i++) {
		dizgi[i] = toupper(dizgi[i]);
		if(dizgi[i] == 'X') {
			(*x)++;
		} else if(dizgi[i] == 'Y') {
			(*y)++;
		} else if(dizgi[i] == ' ') {
			(*b)++;
		}
	}
}
