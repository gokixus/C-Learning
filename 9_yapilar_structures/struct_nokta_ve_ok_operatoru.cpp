#include <stdio.h>

struct nokta{
	int x;
	int y;
};

int main() {
	struct nokta c;
	struct nokta *cptr;
	c.x = 3;
	c.y = 4;
	cptr = &c;
	printf("c.x = %d \n", c.x);
	printf("c.y = %d \n", c.y);
	printf("(*cptr).x = %d \n", (*cptr).x);
	printf("(*cptr).x = %d \n", (*cptr).x);
	printf("cptr->x = %d \n", cptr->x);
	printf("cptr->y = %d \n", cptr->y);
	
	return 0;
}
