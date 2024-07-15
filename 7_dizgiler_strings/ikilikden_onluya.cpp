#include <stdio.h>
#include <stdlib.h>

int ikiliktenOnluya(char *);

int main() {
	char ikilik[16];
	printf("Ikilik sayi giriniz: ");
	scanf("%s", ikilik);
	
	int onluk = ikiliktenOnluya(ikilik);
	printf("%s = %d", ikilik, onluk);
}

int ikiliktenOnluya(char *ikilik) {
	return (int)strtol(ikilik, NULL, 2);
}

