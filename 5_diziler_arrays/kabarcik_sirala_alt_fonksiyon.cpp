#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sirala(int [], int);

int main() {
	int i;
	int eleman = 50;
	int dizi[50];
	srand(time(NULL));
	
	printf("\nOtomatik olusturulan dizi : ");
	for(i = 0 ; i <= eleman-1 ; i++) {
		dizi[i] = rand() % 1000 + 1;
		printf("%d ", dizi[i]);
	}
	
	printf("\nSiralanmis dizi: ");
	sirala(dizi, 50);
}

int sirala(int a[], int n) {
	int i, j, yedek;

	for(i = 0 ; i <= n-1 ; i++) {
		for(j = i+1 ; j < n ; j++) {
			if(a[i] > a[j]) {
				yedek = a[i];
				a[i] = a[j];
				a[j] = yedek;
			}
		}
	}
	for(i = 0 ; i <= n-1 ; i++) {
		printf("%d ", a[i]);
	}
}
