#include <stdio.h>

int main () {
	int sayi1, sayi2, sayi3, sayi4, sayi5;
	printf("5 adet sayi giriniz: ");
	scanf("%d%d%d%d%d", &sayi1, &sayi2, &sayi3, &sayi4, &sayi5);
	
	printf("\n");
	for(int i = 1 ; i<=sayi1 ; i++){
		printf("*", i);
	}
	printf("\n");
	for(int i = 1 ; i<=sayi2 ; i++){
		printf("*");
	}
	printf("\n");
	for(int i = 1 ; i<=sayi3 ; i++){
		printf("*");
	}
	printf("\n");
	for(int i = 1 ; i<=sayi4 ; i++){
		printf("*");
	}
	printf("\n");
	for(int i = 1 ; i<=sayi5 ; i++){
		printf("*");
	}
	return 0;
}
