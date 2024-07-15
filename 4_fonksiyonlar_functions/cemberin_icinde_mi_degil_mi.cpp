#include <stdio.h>
#include <math.h>

float icindeMi(int, int, int, int);

int main() {
	int sayi1, sayi2, sayi3, sayi4, yaricap;
	printf("Bir nokta giriniz(x, y): ");
	scanf("%d%d", &sayi1, &sayi2);
	printf("Bir cember noktasi giriniz (Xm, Ym): ");
	scanf("%d%d", &sayi3, &sayi4);
	printf("Cemberin yaricapini giriniz: ");
	scanf("%d", &yaricap);
	
	float mesafe = icindeMi(sayi1, sayi2, sayi3, sayi4);
	printf("Mesafe = %0.2f", mesafe);
	if(mesafe > yaricap) {
		printf("\nGirdiginiz nokta cemberin disindadir.");
	}
	if(mesafe == yaricap || mesafe < yaricap) {
		printf("\nGirdiginiz nokta cemberin icindedir.");
	}	
}

float icindeMi(int sayi1, int sayi2, int sayi3, int sayi4) {
	float mesafe = sqrt(pow(sayi1-sayi3, 2) + pow(sayi2-sayi4, 2));
	return mesafe; 
}
