#include <stdio.h>
#include <string.h>

int main() {
	char isim[5][25];
	int i, j;
	
	printf("Isimleri giriniz(5 adet):\n");
	for(i = 0 ; i < 5 ; i++) {
		scanf("%s", isim[i]);
	}
	for(i = 0 ; i < 5 ; i++) {
		for(j = i + 1 ; j < 5 ; j++) {
			if(strlen(isim[i]) < strlen(isim[j])) {
				char temp[25];
				strcpy(temp, isim[i]);
				strcpy(isim[i], isim[j]);
				strcpy(isim[j], temp);
			}
		}
	}
	printf("En uzundan kisaya dogru:\n");
	for(i = 0 ; i < 5 ; i++) {
		printf("%s\n", isim[i]);
	}
	return 0;
	
}
