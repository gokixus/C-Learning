#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dikdortgenCiz(){
	int satir = 1 + rand() % 5;
	int sutun = 1 + rand() % 10;
	for(int i = 0 ; i <= satir ; i++) {
		for(int j = 0 ; j <= sutun ; j++) {
			printf("*");
		}
		printf("\n");
	}
}

int main() {
	srand(time(NULL));
	dikdortgenCiz();
	return 0;
}
