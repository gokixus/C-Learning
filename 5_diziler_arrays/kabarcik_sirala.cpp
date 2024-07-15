#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50

int main() {
	int dizi[SIZE], eleman, i, j, yedek;
	int degisen = 0;
	
	printf("Eleman sayisini giriniz: ");
	scanf("%d", &eleman);
	if(eleman > SIZE) {
		printf("\nEleman sayisi 50'den buyuk olmamalidir.");
		return 0;
	}
	
	srand(time(NULL));
	printf("\nOtomatik olusturulan dizi: ");
	for(i = 0 ; i <= eleman-1 ; i++) {
		dizi[i] = rand() % 100 + 1;
		printf("%d ", dizi[i]);
	}
	
	printf("\nDizinin siralanmis hali: ");
	for(i = 0 ; i <= eleman-1 ; i++) {
		for(j = 0 ; j < eleman-1 ; j++) {
			if(dizi[j] > dizi[j+1]) {
				yedek = dizi[j];
				dizi[j] = dizi[j+1];
				dizi[j+1] = yedek;
				degisen++;
			}
		}
	}
	for(i = 0 ; i <= eleman-1 ; i++) {
		printf("%d ", dizi[i]);
	}
	
	printf("\nYer degisen sayisi = %d", degisen);
}
