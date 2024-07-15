#include <stdio.h>

int main() {
	char a[8][8];
	int i, j;
	int satir_konum, sutun_konum;
	
	for(i = 0 ; i < 8 ; i++) {
		for(j = 0 ; j < 8 ; j++) {
			a[i][j] = '-';
		}
	}
	
	printf("Atin konumu(Once satir sonra sutun) : ");
	scanf("%d%d", &satir_konum, &sutun_konum);
	a[satir_konum][sutun_konum] = 'A';

	if(satir_konum-2 >= 0 && sutun_konum-1 >= 0) {
		a[satir_konum-2][sutun_konum-1] = '*';
	}
	if(satir_konum-2 >= 0 && sutun_konum+1 < 8) {
		a[satir_konum-2][sutun_konum+1] = '*';
	}
	if(satir_konum+2 < 8 && sutun_konum-1 >= 0) {
		a[satir_konum+2][sutun_konum-1] = '*';
	}
	if(satir_konum+2 < 8 && sutun_konum+1 < 8) {
		a[satir_konum+2][sutun_konum+1] = '*';
	}
	if(satir_konum-1 >= 0 && sutun_konum-2 >= 0) {
		a[satir_konum-1][sutun_konum-2] = '*';
	}
	if(satir_konum-1 >= 0 && sutun_konum+2 < 8) {
		a[satir_konum-1][sutun_konum+2] = '*';
	}
	if(satir_konum+1 < 8 && sutun_konum-2 >= 0) {
		a[satir_konum+1][sutun_konum-2] = '*';
	}
	if(satir_konum+1 < 8 && sutun_konum+2 < 8) {
		a[satir_konum+1][sutun_konum+2] = '*';
	}

	printf("\n  0 1 2 3 4 5 6 7\n");
	for(i = 0 ; i < 8 ; i++) {
		printf("%d ", i);
		for(j = 0 ; j < 8 ; j++) {
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
