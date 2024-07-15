#include <stdio.h>
#define N 3

int main() {
	int i, j;
	int a[N][N] = { {1, 2, 3},
					{4, 5, 6},
					{7, 8, 9} };
					
	for(i = 0 ; i < N ; i++) {
		for(j = 0 ; j < N ; j++) {
			a[N-i-1][N-j-1] = a[i][j];
		}
	}
	printf("\nSonuc: \n");
	for(i = 0 ; i < N ; i++) {
		for(j = 0 ; j < N ; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
 	}
 	
 	return 0;
}
