#include <stdio.h>
#include <string.h>

int ayniMi(char *, char*);

int main() {
	char kelime[2][10];
	printf("Kelimeleri giriniz:\n");
	for(int i = 0 ; i < 2 ; i++) {
		printf("%d. kelime = ", i+1);
		fgets(kelime[i], 10, stdin);
		kelime[i][strcspn(kelime[i], "\n")] = 0;
	}
	
	printf("%d", ayniMi(kelime[0], kelime[1]));
	return 0;
}

int ayniMi(char *kelime1, char *kelime2) {
	if(strcmp(kelime1, kelime2) == 0) {
		return 1;
	} else {
		return 0;
	}
}
