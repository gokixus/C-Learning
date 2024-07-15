#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50

int main() {
	int dizi[SIZE], n, i, j, yedek;
	
	printf("Eleman sayisini giriniz: ");
	scanf("%d", &n);
	
	if(n > SIZE) {
		printf("\nEleman sayisi 50'den fazla olmamalidir.");
		return 0;
	}
	
	srand(time(NULL));
	printf("\nOtomatik olusturulan dizi: ");
	for(i = 0 ; i <= n-1 ; i++) {
		dizi[i] = rand() % 100 + 1;
		printf("%d, ", dizi[i]);
	}
	
	printf("\nDizinin siralanmis hali: ");
	for(i = 0 ; i <= n-1 ; i++) {
		for(j = 0 ; j < n-1 ; j++) {
			if(dizi[j] > dizi[j+1]) {
				yedek = dizi[j];
				dizi[j] = dizi[j+1];
				dizi[j+1] = yedek;
			}
		}
	}
	for(i = 0 ; i <= n-1 ; i++) {
		printf("%d, ", dizi[i]);
	}
	
	int ilk_ceyreklik_sirasi = (n+1)/4;
	printf("\nIlk ceyrek degeri (%d. siradaki) = %d", ilk_ceyreklik_sirasi, dizi[ilk_ceyreklik_sirasi-1]);
}
