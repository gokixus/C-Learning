#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char cumle[100];
	int i;
	
	printf("Cumle giriniz: ");
	fgets(cumle, 100, stdin);
	cumle[0] = toupper(cumle[0]);
	
	for(i = 1 ; i < strlen(cumle) ; i++) {
		if(cumle[i-1] == ' ') {
			cumle[i] = toupper(cumle[i]);
		}
		else {
			cumle[i] = tolower(cumle[i]);
		}
	}
	printf("Cumlenin son hali: %s", cumle);
	return 0;
}
