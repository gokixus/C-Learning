#include <stdio.h>

void tekCiftSay(int, int *, int*);

int main() {
	int sayi;
	int tek, cift;
	
	printf("En fazla 6 basamakli sayi giriniz: ");
	scanf("%d", &sayi);
	
	tekCiftSay(sayi, &tek, &cift);
	printf("%d sayisinda %d adet tek, %d adet de cift rakam vardir", sayi, tek, cift);

	return 0;
}

void tekCiftSay(int sayi, int *tekPtr, int *ciftPtr) {
	*tekPtr = 0;
	*ciftPtr = 0;
	while(sayi > 0) {
		if(sayi % 2 == 0) {
			(*ciftPtr)++;
		}
		else {
			(*tekPtr)++;
		}
		sayi /= 10;
	}
}
