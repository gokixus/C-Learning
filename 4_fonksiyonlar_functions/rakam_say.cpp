#include <stdio.h>

int rakamsay(int);

int main() {
	int sayi;
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	printf("Girilen sayida toplam %d tane rakam vardir.", rakamsay(sayi));
}

int rakamsay(int sayi) {
	int rakam_sayisi = 0;
	while(sayi > 0) {
		sayi /= 10;
		rakam_sayisi++;
	}
	return rakam_sayisi;
}
