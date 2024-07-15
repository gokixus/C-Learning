#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int sira[7][7] = {0};
	int i, j;
	
	srand(time(0));
	for(i = 1 ; i <= 49 ; i++) {
		do {
			j = rand() % 49;
		} while(sira[j/7][j%7] != 0);
		
		sira[j/7][j%7] = i;
	}
	
	for(i = 0 ; i < 7 ; i++) {
		for(j = 0 ; j < 7 ; j++) {
			printf("%2d ", sira[i][j]);
		}
		printf("\n");
	}
}
