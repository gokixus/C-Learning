#include <stdio.h>

int main() {
	char z[9];
	printf("\nBir dizgi giriniz: ");
	scanf("%[^aeiou]", z);
	printf("\nGirdi : %s", z) ;
	return 0;
}
