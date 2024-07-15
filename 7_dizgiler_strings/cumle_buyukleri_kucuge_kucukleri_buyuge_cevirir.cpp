#include <stdio.h>
#include <ctype.h>

int main() {
	char cumle[100];
	int i;

	printf("Cumlenizi giriniz: ");
	fgets(cumle, 100, stdin);
	for(i = 0 ; cumle[i] != '\0' ; i++) {
		if(isupper(cumle[i])) {
			cumle[i] = tolower(cumle[i]);
		}
		else {
			cumle[i] = toupper(cumle[i]);
		}
	}
	printf("Donusmus hali: ");
	puts(cumle);
	return 0;
}
