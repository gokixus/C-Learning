#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int asal(int n) {
	int i;
	for(i = 2 ; i <= sqrt(n) ; i++) {
		if(n % i == 0) {
			return 0;
		}
	}
	return 1;
}

void asaliBul(int sayi, char secim) {
	int i;
	if(secim == 'b') {
		for(i = sayi + 1 ; i > sayi ; i++) {
			if(asal(i)) {
				printf("%d\n", i);
				break;
			}
		}
	}
	else {
		for(i = sayi - 1 ; i < sayi ; i--) {
			if(asal(i)) {
				printf("%d\n", i);
				break;
			}
		}
	}
}

int main() {
	srand(time(NULL));
	
	int rastgele1 = rand() % 100 + 1;
	int rastgele2 = rand() % 100 + 1;
	
	printf("%d sayisinin kendisinden buyuk olan en kucuk asali = ", rastgele1);
	asaliBul(rastgele1, 'b');
	printf("%d sayisinin kendisinden kucuk olan en buyuk asali = ", rastgele2);
	asaliBul(rastgele2, 'k');
	return 0;
}
