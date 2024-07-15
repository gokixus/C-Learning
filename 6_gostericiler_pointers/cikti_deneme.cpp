#include <stdio.h>

int side(int *, int *);
int x;

int main() {
	int y = 0;
	x = 0;
	printf("%d\n", side(&x, &y));
	printf("%d\n", side(&x, &y));
	return 0;
}

int side(int *a, int *b) {
	*a = *a + *b;
	x = *a + 1;
	return (*a + x);
}
