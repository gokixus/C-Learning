#include <stdio.h>
#include <string.h>

int main() {
	char denklem[255];
	int x, y, m, n;
	char *ptr;
	
	printf("Dogru denklemini giriniz(y=mx+n biciminde): ");
	fgets(denklem, sizeof(denklem), stdin);
	sscanf(denklem, "y=%dx+%d", &m, &n);
	
	printf("x degerini giriniz: ");
	scanf("%d", &x);
	
	y = m * x + n;
	printf("\ny degeri = %d\n", y);
	return 0;
}
