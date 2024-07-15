#include <stdio.h>
#include <math.h>

float noktaKaydir(float *xPtr, float *yPtr, int yatay, int dusey) {
	float eskiX = *xPtr;
	float eskiY = *yPtr;
	*xPtr = *xPtr + yatay;
	*yPtr = *yPtr + dusey;
	float mesafe = sqrt(pow((*xPtr- eskiX), 2) + pow((*yPtr - eskiY), 2));
	return mesafe;
}

int main() {
	float x = 2.5, y = 2.5, mesafe;
	int yatay = 5, dusey = 4;
	
	mesafe = noktaKaydir(&x, &y, yatay, dusey);
	printf("x= %0.2f, y = %0.2f, mesafe = %0.2f", x, y, mesafe);
}
