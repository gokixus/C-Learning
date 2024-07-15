#include <stdio.h>

int main() {
	int dizi[4][3];
	int dizi2[12];
	int i, j, yedek;
	
	printf("Dizinin sirasiz hali:\n");
	for(i = 0 ; i < 4 ; i++) {
		for(j = 0 ; j < 3 ; j++) {
			scanf("%d", &dizi[i][j]);
		}
	}
	for(i = 0 ; i < 4 ; i++) {
		for(j = 0 ; j < 3 ; j++) {
			dizi2[i*3 + j] = dizi[i][j];
		}
	}
	
	//diziyi siralar//
	for(i = 0 ; i < 12 ; i++) {
		for(j = 0 ; j < 12-i-1 ; j++) {
			if(dizi2[j] > dizi2[j+1]) {
				yedek = dizi2[j];
				dizi2[j] = dizi2[j+1];
				dizi2[j+1] = yedek;
			}
		}
	}
	
	printf("Dizinin sirali hali:\n");
	for(i = 0 ; i < 4 ; i++) {
		for(j = 0 ; j < 3 ; j++) {
			dizi[i][j] = dizi2[i*3 + j];
		}
	}
	for(i = 0 ; i < 4 ; i++) {
		for(j = 0 ; j < 3 ; j++) {
			printf("%d  ", dizi[i][j]);
		}
		printf("\n");
	}
}
