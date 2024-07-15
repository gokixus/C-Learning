#include <stdio.h>
#include <ctype.h>
#include <string.h>

int strtoupper(char *cumle) {
	for(int i = 0 ; i < strlen(cumle) ; i ++) {
		cumle[i] = toupper(cumle[i]);
	}
}

int main() {
	char sample[] = "This is a test";
	
	strtoupper(sample);
	printf("%s", sample);
	return 0;
}
