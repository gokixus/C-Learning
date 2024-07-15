#include <stdio.h>

int main() {
	double c[10];
	double b[5];
	double a[5];
	
	int i;
	printf("c dizisinin elemanlarini giriniz(ondalikli sayilar): ");
	for(i = 1 ; i <= 10 ; ++i) {
		scanf("%lf", &c[i]);
	}
	
	for(i = 1 ; i <= 5 ; ++i) {
		a[i] = c[i];
		b[i] = c[i+5];
	}
	printf("a dizisinin elemanlari: ");
	for(i = 1 ; i <= 5 ; ++i) {
		printf("%0.1lf ", a[i]);
	}
	printf("\nb dizisinin elemanlari: ");
	for(i = 1 ; i <= 5 ; ++i) {
		printf("%0.1lf ", b[i]);
	}
	return 0;
}
