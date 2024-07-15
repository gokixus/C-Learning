#include <stdio.h>
#include <string.h>

int main() {
	char isim[5][20];
	int i;
	
	printf("Isimleri giriniz(5 adet):\n");
	for(i = 0 ; i < 5 ; i++) {
		scanf("%s", isim[i]);
	}
	
	printf("\nSonu -an ile biten isimler:");
	for(i = 0 ; i < 5 ; i++) {
		if(isim[i][strlen(isim[i])-1] == 'n' && isim[i][strlen(isim[i])-2] == 'a') {
			printf("\n%s", isim[i]);
		}
	}
	return 0;
}
