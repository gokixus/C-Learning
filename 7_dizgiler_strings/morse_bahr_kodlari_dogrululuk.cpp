#include <stdio.h>
#include <string.h>

int chechMorseBahr(char *, char*);

int main() {
	char morse[100], bahr[100];
	printf("Morse kodunuzu giriniz: ");
	fgets(morse, sizeof(morse), stdin);
	morse[strcspn(morse, "\n")] = '\0';
	printf("Bahr kodunuzu giriniz: ");
	fgets(bahr, sizeof(bahr), stdin);
	bahr[strcspn(bahr, "\n")] = '\0';
	
	int sonuc = chechMorseBahr(morse, bahr);
	printf("Sonuc = %d", sonuc);
	return 0;
}

int chechMorseBahr(char *kod1, char *kod2) {
	int i, j;
	char str[100] = "";
	for(i = 0 ; i < strlen(kod1) ; i++) {
		if(kod1[i] == '.') {
			strcat(str, "di");
		}
		else if(kod1[i] == '-') {
			strcat(str, "da");
		}
		else if(kod1[i] == ' ') {
			strcat(str, " ");
		}
	}
	if(strcmp(str, kod2) == 0) {
		return 1;
	} else {
		return 0;
	}
}
