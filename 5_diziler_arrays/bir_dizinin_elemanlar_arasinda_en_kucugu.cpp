#include <stdio.h>

int en_kucuk_bul(int sayilar[10]) {
	int enKucuk = sayilar[10];
	for(int i = 1 ; i <= 10 ; i++) {
		if(sayilar[i] < enKucuk) {
			enKucuk = sayilar[i];
		}
	}
	return enKucuk;
}

int main() {
	int sayilar[10];
	printf("Dizinin elemanlarini giriniz: ");
	for(int i = 1 ; i <= 10 ; i++) {
		scanf("%d", &sayilar[i]);
	}
	printf("Dizinin en kucuk elemani: %d", en_kucuk_bul(sayilar));
}


