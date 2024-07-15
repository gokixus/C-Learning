#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int arazi[10][10];
	int i, j;
	int min_i = 0, min_j = 0;
	int min_verim = 10000;
	
	srand(time(0));
	printf("Arazinin parsel verimlilikleri:\n");
	for(i = 0 ; i < 10 ; i++) {
		for(j = 0 ; j < 10 ; j++) {
			arazi[i][j] = rand() % 100;
			printf("%2d ", arazi[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0 ; i < 10-1 ; i++) {
		for(j = 0 ; j < 10-1 ; j++) {
			int toplamVerim = arazi[i][j] + arazi[i][j+1] + arazi[i+1][j] + arazi[i+1][j+1];
			if(toplamVerim < min_verim ) {
				min_verim = toplamVerim;
				min_i = i;
				min_j = j;
			}
		}
	}
	
	printf("\nSonuc:\nEvin yapilacagi parsellerin satir ve sutun numaralari:\n");
	printf("%d-%d, %d-%d, %d-%d, %d-%d", min_i+1, min_j+1, min_i+1, min_j+2, min_i+2, min_j+1, min_i+2, min_j+2);
	
	return 0;
	
}
