#include <stdio.h>
#include <string.h>

int main() {
	char cumle[100];
	int i, j;
	int palindrom = 1;
	
	printf("En fazla 100 karakterlik bir anlamli cumle giriniz: ");
	scanf("%s", cumle);
	for(i = 0, j = strlen(cumle) - 1; i < strlen(cumle) / 2 ; i++, j--) {
		if(cumle[i] != cumle[j]) {
			palindrom = 0;
			break;
		}
	}
	
	if(palindrom) {
		printf("Palindromedir.");
	}
	else{
		printf("Palindrome degildir.");
	}
	
	return 0;
}
