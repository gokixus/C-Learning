#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50

int main() {
	int dizi[SIZE], n, i, j, yedek;
	printf("Dizi boyutu giriniz: ");
	scanf("%d", &n);
	if(n > SIZE) {
		printf("Dizi boyutu 50'den buyuk olmamalidir.");
		return 0;
	}
	
	printf("\nOtomatik olusturulan dizi: ");
	srand(time(NULL));
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
	
	int ucuncu_ceyreklik_sirasi = (3*(n+1))/4;
	printf("\nUcuncu ceyrek degeri (%d. siradaki) = %d", ucuncu_ceyreklik_sirasi, dizi[ucuncu_ceyreklik_sirasi-1]);
}
