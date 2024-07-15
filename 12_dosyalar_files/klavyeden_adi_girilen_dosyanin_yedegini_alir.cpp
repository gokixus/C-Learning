#include <stdio.h>

int main() {
	char kaynak[12];
	char ch;
	FILE *dosya1;
	FILE *dosya2;
	
	printf("Kopyasi alinacak dosyanin adini giriniz: ");
	scanf("%s", kaynak);
	
	if((dosya1 = fopen(kaynak, "r")) == NULL) {
		printf("Kaynak dosya acilamadi");
		return 1;
	}
	if((dosya2 = fopen("yedek1234.bak", "w")) == NULL) {
		printf("yedek.bak dosyasi acilamadi");
		return 1;
	}
	
	ch = fgetc(dosya1);
	while( !feof(dosya1)) {
		fputc(ch, dosya2);
		
		ch = fgetc(dosya1);
	}
	fclose(dosya1) ; fclose(dosya2);
	return 0;
}
