#include <stdio.h>

int bulEnbEnk(int, int *, int *);

int main() {
	int sayi;
	int enb, enk;
	printf("Sayiyi giriniz: ");
	scanf("%d", &sayi);
	
	bulEnbEnk(sayi, &enb, &enk);
	printf("\nEn buyuk rakam: %d", enb);
	printf("\nEn kucuk rakam: %d", enk);
	
}

int bulEnbEnk(int sayiPtr, int *enbPtr, int *enkPtr) {
	*enbPtr = -1;
	*enkPtr = 10;
	while(sayiPtr > 0) {
		if(sayiPtr % 10 > *enbPtr){
			*enbPtr = sayiPtr % 10;
		}
		if(sayiPtr % 10 < *enkPtr) {
			*enkPtr = sayiPtr % 10;
		}
		sayiPtr /= 10;
	}
}
