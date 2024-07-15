#include <stdio.h>
#include <stdlib.h>

int main() {
	double d;
	char s[] = "134.2'nin karesi";
	char s2[] = "10101";
	char *kptr;
	long sayi;
	
	d = strtod(s, &kptr);
	printf("\"%s\" dizgisinin double karsiligi = %2.lf\n", s, d);
	printf("Cevrilemeyen kisim = \"%s\"\n", kptr);
	sayi = strtol(s2, &kptr, 2);
	printf("(%s)2 tabaninda = (%ld)10 tabaninda", s2, sayi);
	return 0;
}
