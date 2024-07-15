#include <stdio.h>

int main() {
	int fib1 = 1, fib2 = 1, fib3;
	int adet;
	printf("Kac tane fibonacci yazilsin ? : ");
	scanf("%d", &adet);
	
	printf("%d %d ", fib1, fib2);
	
	for(int i = 3 ; i <= adet ; i++) {
		fib3 = fib1 +  fib2;
		printf("%d ", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}
	return 0;
}
