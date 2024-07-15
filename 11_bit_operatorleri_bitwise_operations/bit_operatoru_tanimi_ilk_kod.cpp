#include <stdio.h>

void bit_goster(unsigned);

int main() {
	bit_goster(17);
	return 0;
}

void bit_goster(unsigned x) {
	unsigned c;
	unsigned maske = 1 << 15;
	printf("%7d = ", x);
	for(c = 1 ; c <= 16 ; c++) {
		if(x & maske)
		 	printf("1");
		else
			printf("0");
		x <<= 1;
		if(c % 8 == 0)
			printf(" ");
	}
	putchar('\n');
}
