#include <stdio.h>

int sayinin_tersi(int);

int main() {
	int sayi;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &sayi);
	printf("Rakamin tersten okunusu hali = %d", sayinin_tersi(sayi));
}

int sayinin_tersi(int sayi) {
	int ters;
	int kalan;
	while(sayi > 0) {
		kalan = sayi % 10;
		ters = ters*10 + kalan;
		sayi /= 10;
	}
	return ters;
}
