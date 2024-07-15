#include <stdio.h>

int main() {
	int kenar;
	printf("Bir kenar uzunlugunu giriniz(1-20): ");
	scanf("%d", &kenar);
	printf("\n");
	for(int i = 1 ; i<=kenar ; i++) {
		for(int n = 1 ; n<=i ; n++) {
			printf("*");
		}
		printf("\n");
	}
	return 0 ;
}
