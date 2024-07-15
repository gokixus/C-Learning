#include <stdio.h>
#include <ctype.h>

int main () {
	char ad[20], soyad[20];
	int yas;
	char devam = 'E';
	FILE *dosya;
	
	if((dosya = fopen("veri.dat", "a")) == NULL) {
		printf("Dosya acilamadi");
		return 1;
	}
	while(devam != 'H') {
		printf("Sirasiyla ad, soyad ve yas giriniz:\n");
		scanf("%s%s%d", ad, soyad, &yas);
		fprintf(dosya, "%s %s %d \n", ad, soyad, yas);
		printf("Devam edecek misiniz(E/H): ");
		scanf(" %c", &devam);
		devam = toupper(devam);
	}
	fclose(dosya);
	return 0;
}
