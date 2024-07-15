#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
	long y;
	double d;
	char s[] = "134";
	char s2[] = "3.14";
	
	x = atoi(s);
	y = atol(s);
	d = atof(s2);
	
	printf("%s dizgisinin int karsiligi = %d, 2 fazlasi = %d\n", s, x, x+2);
	printf("%s dizgisinin long karsiligi = %ld, 2 fazlasi = %ld\n", s, y, y+2);
	printf("%s dizgisinin double karsiligi = %.2lf, yarisi = %.2lf\n", s, d, d/2);
	
	return 0;
}
