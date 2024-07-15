#include <stdio.h>

double sirala(double *, double *, double *);

int main() {
	double x = 3.14, y = 4.56, z = 2.1;
	sirala(&x, &y, &z);
	printf("Sirali : \n%0.2f, %0.2f, %0.2f", x, y, z);
	return 0;
}

double sirala(double *a, double *b, double *c) {
	double temp;
	if(*a > *b) {
		temp = *a;
		*a = *a;
		*b = temp;
	}
	if(*a > *c) {
		temp = *a;
		*a = *c;
		*c = temp;
	}
	if(*b > *c) {
		temp = *b;
		*b = *c;
		*c = temp;
	}
}
