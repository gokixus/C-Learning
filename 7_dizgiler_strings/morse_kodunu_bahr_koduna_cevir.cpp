#include <stdio.h>
#include <string.h>

void morse2bahr(char *, char *);

int main() {
	char morse[100], cevrilmis[100];
	int i;
	printf("Morse kodunu giriniz: ");
	fgets(morse, sizeof(morse), stdin);
	morse[strcspn(morse, "\n")] = '\0';
	
	morse2bahr(morse, cevrilmis);
	printf("Bahr kodu: %s", cevrilmis);
	return 0;
}

void morse2bahr(char *kod, char *str) {
	int i;
	for(i = 0 ; i < strlen(kod) ; i++) {
		if(kod[i] == '.') {
			strcat(str, "di");
		}
		else if(kod[i] == '-'){
			strcat(str, "da");
		}
		else if(kod[i] == ' ') {
			strcat(str, " ");
		}
	}
}
