#include <stdio.h>
#include <math.h>

int alanBul(int, int, int, int); //prototip//

int main() {
	printf("%d\n", alanBul(-2, 3, 2, -2));
	printf("%d\n", alanBul(5, 9, -4, -2));
}

int alanBul(int x, int y, int a, int b) {
	return (fabs(x) + fabs(a))*(fabs(y) + fabs(b));
}
