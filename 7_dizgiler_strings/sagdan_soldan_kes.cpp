#include <stdio.h>
#include <string.h>

void sagdansoldankes(char*, int, int);

int main() {
	char kelime[] = "Baskentliyiz";
	sagdansoldankes(kelime, 3, 5);
	printf("%s\n", kelime);
	return 0;
}

void sagdansoldankes(char *dizgi, int soldan, int sagdan) {
	int i;
	for(i = soldan ; i < strlen(dizgi) ; i++) {
		dizgi[i - soldan] = dizgi[i];
	}
	dizgi[strlen(dizgi)-soldan-sagdan] = '\0';
}
