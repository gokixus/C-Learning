#include <stdio.h>
#include <math.h>

struct cember {
	int x;
	int y;
	float yaricap;
}a1, a2, c;

void yutaniBul(struct cember *, struct cember *, struct cember *);

int main() {
	struct cember a1 = {10, 8, 4.0}, a2 = {15, 10, 13.0}, c;
	yutaniBul(&a1, &a2, &c);
	printf("Yutan cemberin c degiskenleri : x = %d, y = %d, yaricapi = %0.2f", c.x, c.y, c.yaricap);
	return  0;
}

void yutaniBul(struct cember *a1, struct cember *a2, struct cember *c) {
    float uzaklik = sqrt(pow((a1->x - a2->x), 2) + pow((a1->y - a2->y), 2));
    if ((a1->yaricap - a2->yaricap) >= uzaklik) {
        *c = *a1;
    } else if ((a2->yaricap - a1->yaricap) >= uzaklik) {
        *c = *a2;
    }
}
