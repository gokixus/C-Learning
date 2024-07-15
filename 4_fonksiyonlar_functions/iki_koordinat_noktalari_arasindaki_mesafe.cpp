#include <stdio.h>
#include <math.h>

float uzaklik(int, int, int, int);

int main() {
	int x1,y1,x2,y2;
	printf("Iki nokta koordinat giriniz(Ornegin 4 8 2 10, sirasiyla x1,y1,x2,y2'dir.): ");
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	printf("Aralarindaki mesafe = %0.2f", uzaklik(x1,y1,x2,y2));
}

float uzaklik(int x1, int y1, int x2, int y2) {
	float mesafe = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	return mesafe;
}
