#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindrome(char*);

int main() {
	char cumle[250];
	printf("Cumle giriniz: ");
	fgets(cumle, sizeof(cumle), stdin);
	cumle[strcspn(cumle, "\n")] = '\0';
	
	int sonuc = palindrome(cumle);
	if(sonuc == 1) {
		printf("Bu cumle bir palindrome dur.\n");
	} else {
		printf("Bu cumle bir palindorme degildir.\n");
	}
	return 0;
}

int palindrome(char *cumle) {
	int bas = 0;
	int son = strlen(cumle);
	while(bas < son) {
		if(!isalpha(cumle[bas])) {
			bas++;
		} else if(!isalpha(cumle[son])) {
			son--;
		} else {
			if(tolower(cumle[bas]) != tolower(cumle[son])) {
				return 0;
			}
			bas++;
			son--;
		}
	}
	return 1;
}

