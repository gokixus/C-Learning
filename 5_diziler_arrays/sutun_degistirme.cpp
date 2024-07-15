#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sutunDegistir(int a[5][5], int s1, int s2) {
    for(int i = 0; i < 5; i++) {
        int temp = a[i][s1];
        a[i][s1] = a[i][s2];
        a[i][s2] = temp;
    }
}

int main() {
	int dizi[5][5];
	int i, j;
	
	srand(time(0));
	printf("Dizi:\n");
	for(i = 0 ; i < 5 ; i++) {
		for(j = 0 ; j < 5 ; j++) {
			dizi[i][j] = rand() % 25;
			printf("%d ", dizi[i][j]);
		}
		printf("\n");
	}
	
	int sutun1, sutun2;
	printf("\nDegistirmek istediginiz sutun(1-5): ");
	scanf("%d%d", &sutun1, &sutun2);
	
	sutunDegistir(dizi, sutun1-1, sutun2-1);
	for(i = 0 ; i < 5 ; i++) {
		for(j = 0 ; j < 5 ; j++) {
			printf("%d ", dizi[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}


