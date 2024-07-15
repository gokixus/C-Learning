#include <stdio.h>

int diziyiYaz(int a[10][10]) {
	int i, j;
	int minSayi = 100;
	
	printf("10x10'luk dizinin sag alt ucgeni:\n");
	for(i = 0 ; i < 10 ; i++) {
		for(j = 9 ; j > 9-i ; j--) {
			if(a[i][j] < minSayi) {
				minSayi = a[i][j];
			}
		}
	}
	
	return minSayi;
}

int main() {
	int dizi[10][10];
	int i, j;
	
	printf("Dizinin elemanlarini giriniz:\n");
	for(i = 0 ; i < 10 ; i++) {
		for(j = 0 ; j < 10 ; j++) {
			scanf("%d", &dizi[i][j]);
		}
	}
	
	int minSayi = diziyiYaz(dizi);
	printf("Sag alt ucgenin en kucuk sayisi: %d", minSayi);
	
	return 0;
}


