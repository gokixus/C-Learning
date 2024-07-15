#include <stdio.h>

void mukemmelYaz(int sayi1, int sayi2) {
	for(int i = sayi1 ; i <= sayi2 ; i++) {
		int sayi = 0;
		for(int j = 1 ; j < i ; j++) {
			if(i % j == 0)  {
				sayi += j;
			}
		}
		if(sayi == i ) {
			printf("%d\n", i);
		}
	}
}
int main() {
	int baslangic = 10;
	int bitis = 1000;
	mukemmelYaz(1, 10);
	mukemmelYaz(baslangic, bitis);
	return 0;
}
