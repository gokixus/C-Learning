#include <stdio.h>

int main() {
	char isimler[5][20];
	int i;
	for(i = 0 ; i < 5 ; i++) {
		printf("%d. adi giriniz: ", i+1);
		scanf("%s", isimler[i]);
	}
	printf("\n");
	for(i = 4 ; i >= 0 ; i--) {
		printf("%s\n", isimler[i]);
	}
	return 0;
}
