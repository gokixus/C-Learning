#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ertelemeMesajiYaz(int ay) {
	int mevsim = (ay - 1) / 3;
	int rastgeleMevsim = rand() % 4;
	while(rastgeleMevsim == mevsim ){
		rastgeleMevsim = rand() % 4;
	}
	switch(rastgeleMevsim){
		case 0:
			printf("Kisin tatile gidecegiz.");
			break;
		case 1:
			printf("Ilkbaharda tatile gidecegiz.");
			break;
		case 2:
			printf("Yazin tatile gidecegiz.");
			break;
		case 3:
			printf("Sonbaharda tatile gidecegiz.");
			break;
	}
}


int main() {
	srand(time(NULL));
	
	int ay = 6;
	ertelemeMesajiYaz(ay);
	
	return 0;
	
}
