#include <stdio.h>

int main() {
	int dizi[10];
	int i, j;
	int adet = 0;
	printf("A dizisinin elemanlarini giriniz: ");
	for(i = 0 ; i < 10 ; i++) {
		scanf("%d", &dizi[i]);
	}
	
	for(i = 0 ; i < 10 ; i++) {
		adet = 1;
		if(dizi[i] == -1) {
			continue;
		}
		for(j = i+1 ; j < 10 ; j++) {
			if(dizi[i] == dizi[j]) {
				adet++;
				dizi[j] = -1;
			}
		}
		printf("%d sayisindan %d tane\n", dizi[i], adet);
	}
	
	return 0;
}
