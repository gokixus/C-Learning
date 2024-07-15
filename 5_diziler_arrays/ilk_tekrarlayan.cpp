#include <stdio.h>

int ilkTekrarlayan(int [], int);

int main() {
	int dizi[10];
	int i;
	for(i = 0 ; i < 10 ; i++) {
		scanf("%d", &dizi[i]);
	}
	printf("Dizinin ilk tekrarlayani = %d", ilkTekrarlayan(dizi, 10));
}

int ilkTekrarlayan(int a[], int n) {
	int i, j;
	for(i = 0 ; i < n ; i++) {
		for(j = i+1 ; j < n ; j++) {
			if(a[i] == a[j]) {
				return a[j];
			}
		}
	}
	return -1;
}
