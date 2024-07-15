#include <stdio.h>
#include <string.h>

int main() {
	char misra[2][1000], kelime1[1000], kelime2[1000];
	int i, len1, len2;
	
	printf("Misralari giriniz: ");
	for(i = 0 ; i < 2 ; i++) {
		fgets(misra[i], 1000, stdin);
		misra[i][strlen(misra[i]) - 1] = '\0';
		
	}
	len1 = strlen(misra[0]);
	len2 = strlen(misra[1]);
	for(i = len1 - 1 ; i >= 0 ; i--) {
		if(misra[0][i] == ' ') {
			strcpy(kelime1, &misra[0][i+1]);
			break;
		}
	}
	for(i = len2 - 1 ; i >= 0 ; i--) {
		if(misra[1][i] == ' ') {
			strcpy(kelime2, &misra[1][i+1]);
			break;
		}
	}
	if (strcmp(kelime1, kelime2) == 0)
        printf("Girilen mýsralarda cinaslý kafiye vardýr.\n");
    else
        printf("Girilen mýsralarda cinaslý kafiye yoktur.\n");

    return 0;
}
