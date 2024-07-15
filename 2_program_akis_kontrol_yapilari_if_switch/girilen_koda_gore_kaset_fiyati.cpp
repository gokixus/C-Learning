#include <stdio.h>

int main() {
	char kod;
	int adet;
	printf("Kullanici kodunu(A, a, B, b, C, c, D, d) ve adetini giriniz: ");
	scanf("%c%d", &kod, &adet);
	
	int borc;
	
	switch(kod) {
		case 'A':
		case 'a':
			borc = adet;
			printf("\nBorcunuz %d TL", borc);
			break;
		case 'B':
		case 'b':
			borc = adet*2;
			printf("\nBorcunuz %d TL", borc);
			break;
		case 'C':
		case 'c':
			borc = adet*3;
			printf("\nBorcunuz %d TL", borc);
			break;
		case 'D':
		case 'd':
			borc = adet*4;
			printf("\nBorcunuz %d TL", borc);
			break;
		default:
			printf("Lutfen dogru harf(A, a, B, b, C, c, D, d) giriniz!!!");
	}
	return 0;
}
