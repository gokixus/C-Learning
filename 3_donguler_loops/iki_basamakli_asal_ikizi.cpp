#include <stdio.h>

int main() {
	int max=0;
	int i, j;
	
	for(i = 11 ; i<=97 ; i+=2) {
		int isPrime = 1;
		for(j = 2 ; j <= i/2 ; j++) {
			if(i%j == 0) {
				isPrime = 0;
				break;
			}
		}
		if(isPrime) {
			int next = i + 2 ;
			int next_isPrime = 1;
			for(j=2 ; j<=next_isPrime/2 ; j++) {
				if(next%2 == 0) {
					next_isPrime = 0;
					break;
				}
			}
			if(next_isPrime && next <= 97) {
				max = next;
			}
		}
	}
	printf("En buyuk ikiz asal sayi = %d ve %d \n", max-2, max);
	return 0;
}
