#include <stdio.h>

int spacemask(char *cumle) {
	int i;
	for(i = 0 ; cumle[i] ; i++) {
		if(cumle[i] == ' ') {
			cumle[i] = '_';
		}
	}
}

int main() {
	char sample[] = "This is a test";
	spacemask(sample);
	printf("%s", sample);
	return 0;
}
