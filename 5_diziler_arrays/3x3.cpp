#include <stdio.h>

int main() {
	int a[3][3];
	int i, j;
	
	for(i = 0 ; i < 3 ; i++) {
		printf("a dizisinin %d. satiri : ", i+1);
		scanf("%d%d%d", &a[i][0], &a[i][1], &a[i][2]);
	}
	
	for(i = 0 ; i < 3 ; i++) {
		for(j = 0 ; j < 3 ; j++) {
			printf("%d ", a[i][j]); //elemanlari yazdirir//
		}
		printf("| %d\n", a[i][0] + a[i][1] + a[i][2]); //satir toplami//
	}
	
	printf("______\n");
	for(j = 0 ; j < 3 ; j++) {
		int sutunToplam = 0;
		for(i = 0 ; i < 3 ; i++) {
			sutunToplam += a[i][j];
		}
		printf("%d ", sutunToplam); //sutun toplami//
	}
	
	return 0;
}
