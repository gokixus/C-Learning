#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	char tahta[8][8];
	int tek[8];
	int i, j, yedek;
	
	for(i = 0 ; i < 8 ; i++) {
		for(j = 0 ; j < 8 ; j++) {
			tahta[i][j] = '-';
		}
	}
	
	srand(time(0));
	for(i = 0 ; i < 8 ; i++) {
		tek[i] = i;
	}
	for(i = 7 ; i > 0 ; i--) {
		j = rand() % (i+1);
		yedek = tek[i];
		tek[i] = tek[j];
		tek[j] = yedek;
	}
	for(i = 0 ; i < 8 ; i++) {
		tahta[i][tek[i]] = 'K';
	}
	
	printf("  0 1 2 3 4 5 6 7");
	for(i = 0 ; i < 8 ; i++) {
		printf("\n%d ", i);
		for(j = 0 ; j < 8 ; j++) {
			printf("%c ", tahta[i][j]);
		}
	}
	
	return 0;
}
