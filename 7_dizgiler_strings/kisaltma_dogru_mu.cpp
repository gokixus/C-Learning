#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkAcronym(char *a, char *b) {
	char str[100];
	int i, j = 0;
	for(i = 0 ; i < strlen(a) ; i++) {
		a[i] = toupper(a[i]);
		if((i == 0 || a[i-1] == ' ') && isalpha(a[i])) {
			str[j] = a[i];
			j++;
		}
	}
	str[j] = '\0';
	if(strcmp(str, b) == 0) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	char cumle[100], kisaltma[10];
	printf("Cumleyi giriniz: ");
	fgets(cumle, sizeof(cumle), stdin);
	cumle[strcspn(cumle, "\n")] = '\0';
	printf("Kisaltmayi giriniz: ");
	fgets(kisaltma, sizeof(kisaltma), stdin);
	kisaltma[strcspn(kisaltma, "\n")] = '\0';
	
	int sonuc = checkAcronym(cumle, kisaltma);
	printf("\nSonuc = %d", sonuc);
	return 0;
}
