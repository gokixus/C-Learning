#include <stdio.h>

int main() {
	float a[5];
	float b[5];
	float c[10];
	int size_c = 0;
	int i;
	float toplam;
	float ortalama;
	
	printf("a dizisinin elemanlarini giriniz: ");
	for(i = 0 ; i < 5 ; i++) {
		scanf("%f", &a[i]);
	}
	printf("b dizisinin elemanlarini giriniz: ");	
	for(i = 0 ; i < 5 ; i++) {
		scanf("%f", &b[i]);
	}
	
	for(i = 0 ; i < 5 ; i++) {
		toplam += a[i] + b[i];
	}
	ortalama = toplam / 10;
	printf("a ve b dizinin elemanlarindan olusan aritmetik ortalama = %0.2f\n", ortalama);
	
	for(i = 0 ; i < 5 ; i++) {
		if(ortalama <= a[i]) {
			c[size_c] = a[i];
			size_c++;
		}
		if(ortalama <= b[i]) {
			c[size_c] = b[i];
			size_c++;
		}
	}
	
	printf("c dizisinin elemanlari: ");
	for(i = 0 ; i < size_c ; i++) {
		printf("%0.2f ", c[i]);
	}
}
