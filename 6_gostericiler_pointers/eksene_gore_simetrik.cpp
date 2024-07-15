#include <stdio.h>

void simetrik(char eksen, int koordinatX, int koordinatY, int *xPtr, int *yPtr) {
	switch(eksen) {
		case 'o':
			*xPtr = -1*koordinatX;
			*yPtr = -1*koordinatY;
			break;
		case 'y':
			*yPtr = koordinatY;
			*xPtr = -1*koordinatX;
			break;
		case 'x':
			*xPtr = koordinatX;
			*yPtr = -1*koordinatY;
			break;
		default:
			printf("\n\nGecersiz ekran girisi\n");
	}
}

int main() {
	char eksen;
	int koordinatX, koordinatY;
	printf("Hangi eksene gore simetrik bulunacak(orijin icin o, yatay ekseni icin x,\ndusey eksen icin y giriniz): ");
	scanf("%c", &eksen);
	printf("Noktanin koordinatlarini giriniz(x, y): ");
	scanf("%d%d", &koordinatX, &koordinatY);
	
	int x, y;
	simetrik(eksen, koordinatX, koordinatY, &x, &y);
	printf("\nVerilen noktanin simetrigi %d ve %d dur.", x, y);
}
