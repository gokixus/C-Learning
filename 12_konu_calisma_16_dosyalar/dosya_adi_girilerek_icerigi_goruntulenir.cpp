#include <stdio.h>

int main() {
	char satir[100];
	char dosyaAdi[25];
	
	printf("Dosyanin adini giriniz: ");
	scanf("%s", dosyaAdi);
	
	FILE *dosya = fopen(dosyaAdi, "r");	
	if(dosya == NULL) {
		printf("Dosya acilamadi.\n");
		return 1;
	}
	
	fgets(satir, 100, dosya);
	while( !feof(dosya)) {
		printf("%s", satir);
		fgets(satir, 100, dosya);
	}
	fclose(dosya);
	return 0;
}
