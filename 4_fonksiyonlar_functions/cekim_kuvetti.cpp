#include <stdio.h>
#include <math.h>

void kuvvet(int m1, int m2, int r) {
	double g = 6.673 * pow(10,-11);
	float newton = g*m1*m2/pow(r, 2);
	printf("\n-------------------------------------------\n");
	printf("Cekim kuvveti = %f Newtondur", newton);
}

int main() {
	int m1, m2, r;
	printf("Cisimlerin agirligini giriniz(kg) : ");
	scanf("%d%d", &m1, &m2);
	printf("Aralarindaki uzakligi girinz(m) : ");
	scanf("%d", &r);
	kuvvet(m1, m2, r);
	return 0;
}
