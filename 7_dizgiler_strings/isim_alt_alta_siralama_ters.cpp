#include <stdio.h>
#include <string.h>

void fyazdir(char *);

int main() {
	char isim[25];
	printf("Isim giriniz: \n");
	fgets(isim, sizeof(isim), stdin);
	
	fyazdir(isim);
	return 0;
}

void fyazdir(char *isim) {
	int i, j;
	printf("\n");
	for(i = strlen(isim)-1 ; i > 0 ; i--) {
		for(j = 0 ; j < i ; j++) {
			printf("%c", isim[j]);
		}
		printf("\n");
	}
}
