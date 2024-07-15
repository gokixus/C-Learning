#include <stdio.h>

int main () {
	FILE *dosyaptr;
	int i;
	
	dosyaptr = fopen("ascii.txt", "w");
	if(dosyaptr == NULL) {
		printf("Dosya acilamadi");
	} else {
		for(i = 0 ; i <= 255 ; i++) {
			fprintf(dosyaptr, "\t %d \t %c \n", i, i);
		}
		fclose(dosyaptr);
	}
	return 0;
}
