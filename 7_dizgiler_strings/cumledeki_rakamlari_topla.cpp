#include <stdio.h>
#include <string.h>
#include <ctype.h>

int rakamTopla(char *);

int main() {
	char cumle[100];
	printf("Cumleyi giriniz: ");
	fgets(cumle, sizeof(cumle), stdin);
	cumle[strcspn(cumle, "\n")] = '\0';
	
	printf("Cumledeki rakamlarin toplami = %d", rakamTopla(cumle));
	return 0;
}

int rakamTopla(char *c) {
	int toplam = 0;
	for(int i = 0 ; i < strlen(c) ; i++) {
		if(isdigit(c[i])) {
			toplam += c[i] - '0';
		}
	}
	return toplam;
}
