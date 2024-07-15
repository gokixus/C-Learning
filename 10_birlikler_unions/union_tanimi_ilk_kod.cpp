#include <stdio.h>

union insan {
	int yas;
	float boy;
	char cinsiyet;
};

int main() {
	union insan birisi;
	birisi.cinsiyet = 'E';
	printf("1-\n"
			"Cinsiyet = %c \n Yas = %d \n Boy = %f \n",
			birisi.cinsiyet, birisi.yas, birisi.boy);
	birisi.boy = 1.74;
	printf("2-\n"
			"Cinsiyet = %c \n Yas = %d \n Boy = %f \n",
			birisi.cinsiyet, birisi.yas, birisi.boy);
	birisi.yas = 36;
	printf("3-\n"
			"Cinsiyet = %c \n Yas = %d \n Boy = %f \n",
			birisi.cinsiyet, birisi.yas, birisi.boy);
	return 0;
}
