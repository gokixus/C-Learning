#include <stdio.h>
#include <stdlib.h>

void stoi(char *, char *);

int main() {
	char dizgi[25], sayi[25];
	printf("Sayisal icerikli dizgi: ");
	fgets(dizgi, sizeof(dizgi), stdin);
	
	stoi(dizgi, sayi);
	printf("Sayisal karsiligi: %s", sayi);
}

void stoi(char *dizgi, char *sayi) {
	int temp = atoi(dizgi);
	sprintf(sayi, "%d", temp);
}
