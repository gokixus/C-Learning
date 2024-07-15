#include <stdio.h>
#include <string.h>
#include <ctype.h>

char makeAcronym(char *cumle, char *str) {
	int i, j = 0;
	for(i = 0 ; i < strlen(cumle) ; i++) {
		cumle[i] = toupper(cumle[i]);
		if((i == 0 || cumle[i-1] == ' ') && isalpha(cumle[i])) {
			str[j] = cumle[i];
			j++;
		}
	}
	str[j] = '\0';
}

int main() {
    char cumle[100];
    char sonuc[100];
    
    printf("Cumle giriniz: ");
    fgets(cumle, sizeof(cumle), stdin);

    makeAcronym(cumle, sonuc);
    
    printf("Kisaltma = %s\n", sonuc);
    return 0;
}
