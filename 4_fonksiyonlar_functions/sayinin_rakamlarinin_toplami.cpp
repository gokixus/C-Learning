#include <stdio.h>

int rakamtopla(int);

int main() {
	int sayi;
	printf("Bir tamsayi giriniz: ");
	scanf("%d", &sayi);
	printf("Girilen sayinin rakamlarin toplami = %d", rakamtopla(sayi));
}

int rakamtopla(int sayi) {
	int kalan;
	int topla;
	while(sayi > 0) {
		kalan = sayi % 10;
		topla += kalan;
		sayi /= 10;
	}
	return topla;
}
