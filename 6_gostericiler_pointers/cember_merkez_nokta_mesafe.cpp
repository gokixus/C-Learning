#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void icindeNoktaBul(int mx ,int my, int r, int *x, int *y) {
	srand(time(0)); 
    int distance;
    do {
        *x = mx - r + rand() % (2 * r + 1); 
        *y = my - r + rand() % (2 * r + 1); 
        distance = sqrt(pow(*x - mx, 2) + pow(*y - my, 2)); 
    } while (distance > 2*sqrt(pow(r, 2)+ pow(r, 2)) || *x > r || *y > r);
}

int main() {
	srand(time(NULL));
	int mx = 2, my = 5, r = 6;
	int x, y;
	icindeNoktaBul(mx, my, r, &x, &y);
	printf("x, y = %d, %d", x, y);
	return 0;
}
