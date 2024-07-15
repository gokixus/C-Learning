#include <stdio.h>

int main() {
	int a[10];
	int i;
	printf("a dizisinin elemanlarini giriniz: ");
	for(i = 0; i < 10 ; i++) {
		scanf("%d", &a[i]);
	}
	double toplam = 0;
	double ortalama;
	for(i = 0; i < 10 ; i++) {
		toplam = toplam + a[i];
	}
	ortalama = toplam / 10;
	printf("Dizinin ortalmasi %0.2lf dir.\n", ortalama);
	
	printf("Ortalamadan kucuk olanlar: ", a[i]);
	for(i = 0; i < 10 ; i++) {
		if(ortalama > a[i]) {
			printf("%d ", a[i]);
		}
	}
	return 0;
}
