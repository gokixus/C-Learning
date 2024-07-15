#include <stdio.h>
#include <string.h>

int main() {
	char dize[4][150];
	int i;
	
	printf("Siiri giriniz(4 dizeli):\n");
	for(i = 0 ; i < 4 ; i++) {
		fgets(dize[i], 150, stdin);
	}
	printf("\nAkrostis : ");
	for(i = 0 ; i < 4 ; i++) {
		printf("%c", dize[i][0]);
	}
	return 0;
}
