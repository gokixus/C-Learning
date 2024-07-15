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
    int i, j;
    int len = strlen(cumle);
    for(i = 0, j = len - 1; i < j; i++, j--) {
        while(!isalpha(cumle[i]) && i < j) i++;
        while(!isalpha(cumle[j]) && i < j) j--;
        if(tolower(cumle[i]) != tolower(cumle[j])) {
            return 0;
        }
    }
    return 1;
}

