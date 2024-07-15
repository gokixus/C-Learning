#include <stdio.h>

int main() {
	char isim[5][25];
	int i;
	
	printf("Isim giriniz(5 adet):\n");
	for(i = 0 ; i < 5 ; i++) {
		scanf("%s", isim[i]);
	}
	
	printf("\nB ile baslayan isimler:");
	for(i = 0 ; i < 5 ; i++) {
		if(isim[i][0] == 'B') {
			printf("\n%s", isim[i]);
		}
	}
	return 0;
}
