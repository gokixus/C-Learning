#include <stdio.h>

#define SIZE 500

double interQuartile(int a[], int n) {
	int i, j, yedek;
	
	for(i = 0 ; i <= n-1 ; i++) {
		for(int j = 0 ; j < n ; j++) {
			if(a[j] > a[j+1]) {
				yedek = a[j];
				a[j] = a[j+1];
				a[j+1] = yedek;
			}
		}
	}
	int ceyreklik = n / 4;
	int m = n - ceyreklik*2;
	int yenidizi[m];
	for(i = 0 ; i < m ; i++) {
		yenidizi[i] = a[i+ceyreklik];
	}
	double toplam = 0;
	for(i = 0; i < m ; i++) {
		toplam += yenidizi[i];
	}
	double ortalama = toplam / m;
	return ortalama;
}

int main() {
	int dizi[SIZE], elemanSayisi, i;
	
	printf("Eleman sayisi giriniz(en fazla 500): ");
	scanf("%d", &elemanSayisi);
	if(elemanSayisi > SIZE) {
		printf("Eleman sayisi 500'den fazla olmamalidir.");
	}
	
	printf("Dizinin elemanlarini giriniz(%d adet): ", elemanSayisi);
	for(i = 0 ; i <= elemanSayisi-1; i++) {
		scanf("%d", &dizi[i]);
	}
	
	printf("Dizinin ceyrekler arasi ortalamasi = %0.2f", interQuartile(dizi, elemanSayisi));
}


