#include <stdio.h>
#include <ctype.h>

int main() {
	char c1 = '7';
	char c2 = 'A';
	
	if(isdigit(c1)) {
		printf("c1 bir rakamdir.\n");
	}
	else {
		printf("c1 bir rakam degildir\n");
	}
	
	if(isdigit(c2)) {
		printf("c2 bir rakamdir.\n");
	}
	else {
		printf("c2 bir rakam degildir\n");
	}
	
	if(isalpha(c1)) {
		printf("c1 bir rakamdir.\n");
	}
	else {
		printf("c1 bir rakam degildir\n");
	}
	
	if(isalpha(c2)) {
		printf("c2 bir rakamdir.\n");
	}
	else {
		printf("c2 bir rakam degildir\n");
	}
	
	if(ispunct(':')) {
		printf(": bir noktalama isaretidir.\n");
	}
	else {
		printf(": bir noktalama isareti degildir.\n");
	}
	
	printf("c2 = %c, kucuk harf harsiligi = %c \n", c2, tolower(c2));
	return 0;
}
