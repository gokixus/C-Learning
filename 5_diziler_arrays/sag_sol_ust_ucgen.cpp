#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void diziBol(int a[4][4], int n) {
	int i, j;
	if(n == 1) {
		for(i = 0 ; i < 4 ; i++) {
			for(j = 0 ; j < 3-i ; j++) {
				printf("%d ", a[i][j]);
			}
		}
	}
	if(n == 2) {
		for(i = 0 ; i < 4 ; i++) {
			for(j = 4 ; j > i ; j--) {
				printf("%d ", a[i][j]);
			}	
		}
	}
}

int main() {
	int dizi[4][4];
	int i, j, ucgen;
	
	srand(time(0));
	for(i = 0 ; i < 4 ; i++) {
		for(j = 0 ; j < 4 ; j++) {
			dizi[i][j] = rand() % 16 + 1;
			printf("%2d ", dizi[i][j]);
		}
		printf("\n");
	}
	
	printf("\nDiziyi bolmek icin secim(Sol ust ucgen icin 1, sag ust ucgen icin 2): ");
	scanf("%d", &ucgen);
	diziBol(dizi, ucgen);
}


