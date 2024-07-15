#include <stdio.h>

int main() {
	int i;
	int j;
	int sum;
	
	printf("1 ile 1000 arasindaki mukemmel sayilar :\n");
	for(i = 1 ; i <= 10000 ; i++) {
		sum = 0;
		for(j = 1 ; j < i ; j++) {
			if(i % j == 0) {
				sum += j;
			}
		}
		if(sum == i) {
			printf("%d\n", i);
		}
	}
	return 0;
}
