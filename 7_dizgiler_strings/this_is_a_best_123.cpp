#include <stdio.h>
#include <ctype.h>
#include <string.h>

int strstrip(char *str, int n) {
	int i, j;
	if(n == 1) {
		for(i = 0 ; str[i] ; i++) {
			if(tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u') {
				for(j = i ; str[j] ; j++) {
					str[j] = str[j+1];
				}
				i--;
			} 
		}
	}
	else if(n == 2) {
		for(i = 0 ; str[i] ; i++) {
			if(tolower(str[i]) != 'a' && tolower(str[i]) != 'e' && tolower(str[i]) != 'i' && tolower(str[i]) != 'o' && tolower(str[i]) != 'u' && isalpha(str[i])) {
				for(j = i ; str[j] ; j++) {
					str[j] = str[j+1];
				}
				i--;
			} 
		}
	}
	else if(n == 3) {
		for(i = 0 ; str[i] ; i++) {
			if(isdigit(str[i])) {
				for(j = i ; str[j] ; j++) {
					str[j] = str[j+1];
				}
				i--;
			}
		}
	}
}

int main () {
	char sample1[] = "This is a 1. test";
	char sample2[] = "This is a 2. test";
	char sample3[] = "This is a 3. test";
	
	strstrip(sample1, 1);
	printf("%s\n", sample1);
	strstrip(sample2, 2);
	printf("%s\n", sample2);
	strstrip(sample3, 3);
	printf("%s\n", sample3);
	return 0;
}
