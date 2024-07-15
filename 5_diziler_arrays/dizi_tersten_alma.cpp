#include <stdio.h>

int main() {
	int dizi[10], i;
	printf("Dizinin elemanlarini giriniz(10 tane sayi): ");
	for(i = 0 ; i < 10 ; i++) {
		scanf("%d", &dizi[i]);
	}
	
	printf("\nGirilen elemanlarin tersten hali : ");
	for(i = 10-1 ; i >= 0 ; i--) {
		printf("%d ", dizi[i]);
	}
	return 0;
}
