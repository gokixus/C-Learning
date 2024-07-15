#include <stdio.h>

int main() {
	int a[5], b[5];
	int i;
	printf("a dizisinin elemanlarini giriniz: ");
	for(i = 0 ; i < 5 ; i++) {
		scanf("%d", &a[i]);
	}
	printf("b dizisinin elemanlarini giriniz: ");
	for(i = 0 ; i < 5 ; i++) {
		scanf("%d", &b[i]);
	}
	
	printf("Elemanlarin toplami olan dizi = ");
	for(i = 0 ; i < 5 ; i++) {
		int c = a[i] + b[i];
		printf("%d ", c);
	}
}
