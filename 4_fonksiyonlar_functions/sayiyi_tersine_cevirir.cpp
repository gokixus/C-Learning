#include <stdio.h>

int tersCevir(int);

int main() {
	printf("%ld \n", tersCevir(123));
	printf("%ld \n", tersCevir(123456));
	
	return 0;
}

int tersCevir(int sayi) {
	int ters = 0;
	while(sayi != 0) {
		ters = ters*10 + sayi%10;
		sayi /= 10;
	}
	return ters;
}
