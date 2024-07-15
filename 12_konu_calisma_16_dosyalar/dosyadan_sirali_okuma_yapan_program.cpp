#include <stdio.h>
#include <ctype.h>

int main () {
	char ad[20], soyad[20];
	int yas;
	char devam = 'E';
	FILE *dosya;
	
	if((dosya = fopen("veri.dat", "r")) == NULL) {
		printf("Dosya acilamadi");
		return 1;
	}
	printf("\n	KAYITLAR		\n");
	fscanf(dosya, "%s%s%d", ad, soyad, &yas);
	while(!feof(dosya) ) {
		printf("%s %s %d \n", ad, soyad, yas);
		fscanf(dosya, "%s%s%d", ad, soyad, &yas);
	}
	fclose(dosya);
	return 0;
}
