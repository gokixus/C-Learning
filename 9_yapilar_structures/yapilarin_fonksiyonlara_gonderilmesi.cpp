#include <stdio.h>

struct nokta {
	int x;
	int y;
};

void yazdir(struct nokta);
void degistir(struct nokta *);

int main() {
	struct nokta c = {3, 4};
	struct nokta *cptr;
	
	yazdir(c);
	degistir(&c);
	yazdir(c);
	return 0;
}

void yazdir(struct nokta b) {
	printf("c.x = %d\n", b.x);
	printf("c.y = %d\n", b.y);
}
void degistir(struct nokta *ptr) {
	ptr->x = 7;
	ptr->y = 18;
}
