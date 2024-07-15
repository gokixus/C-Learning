#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int noktaBul(int, int, int, int);

int main() {
	srand(time(0));
	
	noktaBul(-2, 3, 2, -2);
	return 0;
}

int noktaBul(int x1, int y1, int x2, int y2) {
	int x, y;
	int genislik = fabs(x2-x1);
	int yukseklik = fabs(y2-y1);
	
	x = rand() % (genislik + 1) + x1;
	y = rand() % (yukseklik + 1) + y2;
	
	printf("Nokta = (%d, %d)", x, y);
}
