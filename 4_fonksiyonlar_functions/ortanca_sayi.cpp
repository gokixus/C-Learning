#include <stdio.h>

int ortanca(int sayi1, int sayi2, int sayi3) {
	if(sayi1 > sayi2 && sayi2 > sayi3) {
		return sayi2;
	}
	if(sayi1 > sayi3 && sayi3 > sayi2) {
		return sayi3;
	}
	if(sayi2 > sayi3 && sayi3 > sayi1) {
		return sayi3;
	}
	if(sayi2 > sayi1 && sayi1 > sayi3) {
		return sayi1;
	}
	if(sayi3 > sayi1 && sayi1 > sayi2) {
		return sayi1;
	}
	if(sayi3 > sayi2 && sayi2 > sayi1) {
		return sayi2;
	}
}

int main() {
	int sayi1, sayi2, sayi3;
	printf("3 tam sayi giriniz : ");
	scanf("%d%d%d", &sayi1, &sayi2, &sayi3);
	printf("Girilen sayilarin ortancasi = %d", ortanca(sayi1, sayi2, sayi3));
}
