#include <stdio.h>

void ayristir(int , int *, int *, int *, int *);

int main() {
	int sayi;
	printf("Sayiyi giriniz: ");
	scanf("%d", &sayi);
	
	int birlerB, onlarB, yuzlerB, binlerB;
	
	ayristir(sayi, &birlerB, &onlarB, &yuzlerB, &binlerB);
	printf("\n%d sayisinin birler basamagi: %d", sayi, birlerB);
	printf("\n%d sayisinin onlar  basamagi: %d", sayi, onlarB);
	printf("\n%d sayisinin yuzler basamagi: %d", sayi, yuzlerB);
	printf("\n%d sayisinin binler basamagi: %d", sayi, binlerB);
	
	return 0;
}

void ayristir(int sayiPtr, int *a, int *b, int *c, int *d) {
	*a = sayiPtr % 10;
	*b = (sayiPtr/10) % 10;
	*c = (sayiPtr/100) % 10;
	*d = sayiPtr/1000;
}
