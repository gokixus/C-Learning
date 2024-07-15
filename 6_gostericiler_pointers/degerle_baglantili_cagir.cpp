#include <stdio.h>

void takas(int *, int *);

int main() {
	int a= 5, b = 7;
	
	printf("a = %d, b = %d \n", a, b);
	takas(&a, &b);
	printf("a = %d, b = %d \n", a, b);
}

void takas(int *xp, int *yp) {
	int yedek;
	
	yedek = *xp;
	*xp = *yp;
	*yp = yedek;
}
