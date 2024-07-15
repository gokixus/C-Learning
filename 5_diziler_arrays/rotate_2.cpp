#include <stdio.h>

int rotate(int sayilar[], int miktar) {
	int i, j;
	int dondurulecek;
	for(i = 0 ; i < miktar ; i++) {
		dondurulecek = sayilar[0];
		for(j = 0 ; j < 9 ; j++) {
			sayilar[j] = sayilar[j+1];
		}
		sayilar[9] = dondurulecek;
	}
}

int main() {
	int sayilar[10];
	int i;
	int miktar;
	printf("Dizinin elemanlarini giriniz: ");
	for(i = 0 ; i < 10 ; i++) {
		scanf("%d", &sayilar[i]);
	}
	printf("Dondurme miktarini giriniz: ");
	scanf("%d", &miktar);
	printf("---------------------------------\n");
	rotate(sayilar, miktar);
	printf("Dizinin son hali = ");
	for(i = 0 ; i < 10 ; i++) {
		printf("%d ", sayilar[i]);
	}
}


