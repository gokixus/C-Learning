#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	char mayin[8][8];
	int i, j;
	
	for(i = 0 ; i < 8 ; i++) {
		for(j = 0 ; j < 8 ; j++) {
			mayin[i][j] = '-';
		}
	}
	
	srand(time(NULL));
	for(i = 0 ; i < 9 ; i++) {
		int x = rand() % 8;
		int y = rand() % 8;
		if(mayin[x][y] != '*') {
			mayin[x][y] = '*';
		}
	}
	
	printf("\n  0 1 2 3 4 5 6 7\n");
	for(i = 0 ; i < 8 ; i++) {
		printf("%d ", i);
		for(j = 0 ; j < 8 ; j++) {
			printf("%c ", mayin[i][j]);
		}
		printf("\n");
	}
}
