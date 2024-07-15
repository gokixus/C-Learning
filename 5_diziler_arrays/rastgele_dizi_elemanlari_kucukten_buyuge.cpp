#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_SIZE 50

int main() {
	int dizi[MAX_SIZE], siralanmis[MAX_SIZE], n, i, j;
	int yedek, degismeyen = 0;
	printf("Dizi boyutu giriniz: ");
	scanf("%d", &n);
	
	if(n > SIZE_MAX) {
		printf("\nDizi boyutu 50'den fazla olmamalidir.");
		return 0;
	}
	
	srand(time(NULL));
	printf("\nOtomatik olusturulan dizi = ");
	for(i = 0 ; i < n ; i++) {
		dizi[i] = rand() % 100 + 1;
		siralanmis[i] = dizi[i];
		printf("%d, ", dizi[i]);
	}
	
	printf("\nDizinin siralanmis hali = ");
	for(i = 0 ; i <= n-1 ; i++) {
		for(j = 0 ; j < n-1 ; j++) {
			if(siralanmis[j] > siralanmis[j+1]) {
				yedek = siralanmis[j];
				siralanmis[j] = siralanmis[j+1];
				siralanmis[j+1] = yedek;
			}
		}
	}
	for(i= 0 ; i <= n-1 ; i++) {
		printf("%d, ", siralanmis[i]);
	}
	
	
	for(i = 0 ; i <= n-1 ; i++) {
		if(dizi[i] == siralanmis[i]) {
			degismeyen++;
		}
	}
	printf("\nYeri degismeyenlerin sayisi = %d", degismeyen);
	return 0;
}
