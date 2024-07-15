#include <stdio.h>

void googleAra(int *dizi, int n, int aranan) {
	for(int i = 0 ; i < n ; i++) {
		if(dizi[i] == aranan) {
			int temp = dizi[i];
			dizi[i] = dizi[i-1];
			dizi[i-1] = temp;
		}
	}
}

int main() {
	int i, dizi[9];
	printf("Dizi elemanlarini giriniz(9 adet): ");
	for(i = 0 ; i < 9 ; i++) {
		scanf("%d", &dizi[i]);
	}
	googleAra(dizi, 9, 12);
	googleAra(dizi, 9, 12);
	
	for(i = 0 ; i < 9 ; i++) {
		printf("%d ", dizi[i]);
	}
	return 0;
}
