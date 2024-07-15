#include <stdio.h>
#include <string.h>

int main() {
	char isim[10][25];
	int notu[10];
	int i, j;
	
	printf("Isim ve notlari giriniz:\n");
	for(i = 0 ; i < 10 ; i++) {
		scanf("%s%d", isim[i], &notu[i]);
	}
	for(i = 0 ; i < 10 ; i++) {
		for(j = i+1 ; j < 10 ; j++) {
			if(notu[i] < notu[j]) {
				char temp[20];
				int tempNot;
				strcpy(temp, isim[i]);
				strcpy(isim[i], isim[j]);
				strcpy(isim[j], temp);
				tempNot = notu[i];
				notu[i] = notu[j];
				notu[j] = tempNot;
			}
		}
	}
	printf("Nota gore sirali:\n");
	for(i = 0 ; i < 10 ; i++) {
		printf("%s %d\n", isim[i], notu[i]);
	}
	return 0;
}
