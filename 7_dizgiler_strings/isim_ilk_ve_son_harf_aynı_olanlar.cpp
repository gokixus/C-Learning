#include <stdio.h>
#include <string.h>

int main() {
	char isim[10][25];
	int i;
	
	printf("10 tane isim giriniz:\n");
	for(i = 0 ; i < 10 ; i++) {
		scanf("%s", isim[i]);
	}
	printf("\nIlk harfi ve son harfi ayni olanlar:");
	for(i = 0 ; i < 10 ; i++) {
		if(isim[i][0] == isim[i][strlen(isim[i])-1]) {
			printf("\n%s", isim[i]);
		}
	}
	return 0;
	
}
