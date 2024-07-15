#include <stdio.h>
#include <string.h>

int main() {
	char tcNo1[12], tcNo2[12];
	FILE *dosya1, *dosya2, *dosya3;
	
	dosya1 = fopen("maaslar.txt", "r");
	dosya2 = fopen("oluler.txt", "r");
	dosya3 = fopen("supheli.txt", "w");
	
	if( dosya1 == NULL || dosya2 == NULL || dosya3 == NULL) {
		printf("Dosyalardan biri veya birkaci acilamadi.");
		return 1;
	}
	
	while( !feof(dosya1)) {
		rewind( dosya2);
		fscanf( dosya2, "%s", tcNo2);
		while( !feof(dosya2)) {
			if( strcmp(tcNo1, tcNo2) == 0) {
				fprintf(dosya3, "%s \n", tcNo1);
				break;
			}
			fscanf( dosya2, "%s", tcNo2);
		}
		fscanf( dosya1, "%s", tcNo1);
	}
	fclose(dosya1); fclose(dosya2); fclose(dosya3);
	return 0;
}
