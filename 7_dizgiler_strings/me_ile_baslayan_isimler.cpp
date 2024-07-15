#include <stdio.h>

int main() {
	char isim[10][100];
	int i;
	
	printf("Isimleri giriniz:\n");
	for(i = 0 ; i < 10 ; i++) {
		scanf("%s", isim[i]);
	}
	printf("\nMe ile baslayanlar:");
	for(i = 0 ; i < 10 ; i++) {
		if(isim[i][0] == 'M' && isim[i][1] == 'e') {
			printf("\n%s", isim[i]);
		}
	}
	return 0;
}
