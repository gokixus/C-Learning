#include <stdio.h>
#include <stdlib.h>

void stof(char *, char *);

int main() {
	char dizgi[50], sayi[50];
	printf("Sayisal icerikli dizgi giriniz: ");
	fgets(dizgi, 50, stdin);
	
	stof(dizgi, sayi);
	printf("Sayisal karsiligi: %s", sayi);
	return 0;
}

void stof(char *dizgi, char *sayi) {
	double temp = atof(dizgi);
	sprintf(sayi, "%.2lf", temp);
}
