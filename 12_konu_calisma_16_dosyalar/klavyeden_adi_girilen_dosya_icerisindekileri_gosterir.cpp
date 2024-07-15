#include <stdio.h>

int main () {
	char satir[70];
	char dosyaadi[20];
	FILE *dosya;
	
	printf("Dosyanin adini giriniz: ");
	gets(dosyaadi);
	if((dosya = fopen(dosyaadi, "r")) == NULL) {
		printf("Dosya acilamadi");
		return 1;
	}
	
	fgets(satir, 70, dosya);
	while( !feof(dosya)) {
		printf("%s", satir);
		fgets(satir, 70, dosya);
	}
	fclose(dosya);
	return 0;
}
