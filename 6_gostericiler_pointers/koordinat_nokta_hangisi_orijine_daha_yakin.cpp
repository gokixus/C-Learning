#include <stdio.h>
#include <math.h>

void hangiUcuDahaYakin(float x1, float y1, float x2, float y2, float *xPtr, float *yPtr) {
	float mesafe1 = sqrt(pow(x1-0, 2)+pow(y1-0, 2));
	float mesafe2 = sqrt(pow(x2-0, 2)+pow(y2-0, 2));
	if(mesafe1 > mesafe2) {
		*xPtr = x2;
		*yPtr = y2;
	}
	else {
		*xPtr = x1;
		*yPtr = y1;
	}
}

int main() {
	float x1 = 0.0, y1 = 4.0, x2 = 3.0, y2 = 1.0;
	float x, y;
	hangiUcuDahaYakin(x1, y1, x2, y2, &x, &y);
	printf("Orijine daha yakin olan x = %.1f, y = %.1f", x, y);
	return 0;
}
