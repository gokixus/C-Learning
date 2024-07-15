#include <stdio.h>

int kontrol(int);

int main() {
	int c = kontrol(11);
	printf("\n\n%3d", c);
	return 0;
}

int kontrol(int x) {
	int c;
	int kac_tane = 0;
	int maske = 1 << 15;
	printf("%4d = ", x);
	for(c = 1 ; c <= 16 ; c++) {
		if(x & maske) {
			printf("1");
		 	kac_tane++;
		} else {
			printf("0");
		}
		x <<= 1;
		if(c % 8 == 0) {
			printf(" ");
		}		
	}
	if(kac_tane % 2 == 1) {
		return 1;
	} else {
		return 0;
	}
	putchar('\n');
}
