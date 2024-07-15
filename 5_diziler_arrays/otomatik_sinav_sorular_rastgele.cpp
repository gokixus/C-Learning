#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int i, j, temp;
	int sorular[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
	srand(time(NULL));
	
	for(i = 0 ; i < 10 ; i++) {
		j = rand() % 10;
		temp = sorular[i];
		sorular[i] = sorular[j];
		sorular[j] = temp;
	}
	
	printf("Sorularin sinavdaki duzenleri asagidaki gibi olabilir:\n");
	for(i = 0 ; i < 10 ; i++) {
		printf("%d ", sorular[i]);
	}
}
