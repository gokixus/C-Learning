#include <stdio.h>
#include <string.h>

int main() {
	char ad1[20], soyad1[20], ad2[20], soyad2[20];
	FILE *dosya1 = fopen("valilik.txt", "r");
	FILE *dosya2 = fopen("koruma.txt", "r");
	FILE *dosya3 = fopen("ortak.txt", "w");
	if(dosya1 == NULL || dosya2 == NULL) {
		printf("Dosyalardan biri veya birkaci acilamadi.\n");
		return 1;
	}
	if(dosya3 == NULL) {
		printf("Dosya olusturulamadi.\n");
		fclose(dosya1); fclose(dosya2);
		return 1;
	}
	
	while(fscanf(dosya1, "%s %s", ad1, soyad1) == 2) {
		rewind(dosya2);
		while(fscanf(dosya2, "%s %s", ad2, soyad2) == 2) {
			if(strcmp(ad1, ad2) == 0 && strcmp(soyad1, soyad2) == 0) {
				fprintf(dosya3, "%s %s\n", ad1, soyad1);
				break;
			}
		}
	}
	fclose(dosya1);
    fclose(dosya2);
    fclose(dosya3);
	printf("Islem tamamlandi.\n");
	return 0;
}
