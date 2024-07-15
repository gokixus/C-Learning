#include <stdio.h>

int kontrol(int, int);

int main() {
	int sayi1, sayi2;
	printf("Iki tamsayi giriniz: ");
	scanf("%d%d", &sayi1, &sayi2);
	
	printf("\n%d", kontrol(sayi1, sayi2));
}

int kontrol(int sayi1, int sayi2) {
	int i, j;
	int bolenlerin_toplami1 = 0, bolenlerin_toplami2 = 0;
	for(i = 1 ; i < sayi1 ; i++) {
		if(sayi1 % i == 0) {
			bolenlerin_toplami1 += i;
		}
	}
	for(j = 1 ; j < sayi2 ; j++) {
		if(sayi2 % j == 0) {
			bolenlerin_toplami2 += j;
		}
	}
	if(bolenlerin_toplami1 == sayi2 && bolenlerin_toplami2 == sayi1) {
		return 1;
	}
	else {
		return 0;
	}
}
