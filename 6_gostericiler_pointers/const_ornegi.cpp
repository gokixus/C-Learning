#include <stdio.h>

int main() {
	int a = 5, b = 7;
	const int *ptr = &a;
	
	printf("a = %d, aptr = %p, *ptr = %d", a, ptr, *ptr);
	ptr = &b;
	*ptr = 7;
	return 0;
}
