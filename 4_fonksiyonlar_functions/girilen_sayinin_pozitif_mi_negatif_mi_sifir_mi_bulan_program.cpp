#include <stdio.h>

int durumBul(int sayi) {
	if(sayi > 0) {
		return 1;
	}
	else if(sayi < 0) {
		return -1;
	}
	else {
		return 0;
	}
}


int main() {
	int sayi;
	printf("Bir tam sayi giriniz : ");
	scanf("%d", &sayi);
	if(durumBul(sayi) == 1) {
		printf("Girilen sayi pozitiftir. ");
	}
	else if(durumBul(sayi) == -1) {
		printf("Girilen sayi negatiftir. ");
	}
	else {
		printf("Girilen sayi sifirdir. ");
	}
	return 0;
}
