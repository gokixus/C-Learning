#include <stdio.h>
#include <ctype.h>

int main() {
	char s[25];
	int i;
	printf("Sozcugu giriniz(en fazla 25 karakter): ");
	scanf("%s", s);
	for(i = 0 ; s[i] != '\0' ; i++) {
		if(isupper(s[i])) {
			s[i] = tolower(s[i]);
		}
		else if(islower(s[i])) {
			s[i] = toupper(s[i]);
		}
	}
	printf("Donusturulmus hali: %s", s);
	return 0;
}
