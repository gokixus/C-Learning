#include <stdio.h>

int main() {
	int sayilar[6];
	printf("Sayilari giriniz(1-30 arasinda): \n");
	for(int i = 1 ; i <= 6 ; i++) {
		scanf("%d", &sayilar[i]);
	}
	
	for(int i = 1 ; i <= 6 ; i++) {
		printf("%d: ", sayilar[i]);
		for(int j = 1 ; j <= sayilar[i] ; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
