#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int otopark[9][9] = {0};
	int i, j;
	
	srand(time(0));
	for(i = 1 ; i <= 54 ; i++) {
		do {
			j = rand() % 81;
		} while(otopark[j/9][j%9] != 0 || j/9 == 1 || j/9 == 4 || j/9 == 7);
		
		otopark[j/9][j%9] = i;	
		
	}
	
	for(i = 0 ; i < 9 ; i++) {
		for(j = 0 ; j < 9 ; j++) {
			printf("%2d ", otopark[i][j]);
		}
		printf("\n");
	}
	return 0;
}
