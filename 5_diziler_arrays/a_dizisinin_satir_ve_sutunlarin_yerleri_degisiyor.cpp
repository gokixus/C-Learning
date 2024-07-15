#include <stdio.h>

int main() {
	int a[3][3];
	int i, j;
	
	for(i = 0 ; i < 3 ; i++) {
		printf("a dizisinin %d. satiri : ", i+1);
		for(j = 0 ; j < 3 ; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("\nCevrilmis hali:\n");
	for(i = 0 ; i < 3 ; i++) {
		for(j = 0 ; j < 3 ; j++) {
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
