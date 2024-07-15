#include <stdio.h>
#include <ctype.h>

int main() {
	char dosyaAdi[25];
	printf("Harf sayisi bulunacak dosyanin adini giriniz: ");
	scanf("%s", dosyaAdi);
	FILE *fOku = fopen(dosyaAdi, "r");
	FILE *fYazdir = fopen("frekans.txt", "w");
	if(!fOku || !fYazdir) {
		perror("Dosya acilamadi veya olusturulamadi.\n");
		return 1;
	}
	
	char ch;
	int frekans[256] = {0};
	while((ch = fgetc(fOku)) != EOF) {
		if(isalpha(ch)) {
			ch = tolower(ch);
			frekans[ch]++;
		}
	}
	
	for(ch = 'a' ; ch <= 'z' ; ch++) {
		fprintf(fYazdir, "%c --> %d\n", toupper(ch), frekans[ch]);
	}
	
	fclose(fOku);
	fclose(fYazdir);
	printf("frekans.txt dosyasý olusturuldu.\n");
	return 0;
}
