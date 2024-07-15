#include <stdio.h>

int main() {
	int x1, x2, y1, y2;
	printf("Ilk noktanin x1 degerini giriniz: ");
	scanf("%d", &x1);
	printf("Ilk noktanin y1 degerini giriniz: ");
	scanf("%d", &y1);
	printf("Ikinci noktanin x2 degerini giriniz: ");
	scanf("%d", &x2);
	printf("Ikinci noktanin y2 degerini giriniz: ");
	scanf("%d", &y2);
	
	float x0, y0;
	x0 = (x1+x2)/2;
	y0 = (y1+y2)/2;
	
	printf("\nA(%d, %d) ve B(%d, %d) noktalarinin orta noktasi C(%0.2f, %0.2f) dir.", x1, y1, x2, y2, x0, y0 );
	return 0;
}
