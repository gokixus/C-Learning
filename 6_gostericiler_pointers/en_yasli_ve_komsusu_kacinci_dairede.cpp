#include <stdio.h>

void enYasliKomsuyuBul(int *daireler, int n, int *enYasli, int *komsu) { 
	int i, minYil = 2024;
	for(i = 0 ; i < n ; i++) {
		if(daireler[i] < minYil) {
			minYil = daireler[i];
			*enYasli = i+1;
			if(i+1 % 2 == 0) {
				*komsu = i;
			} else {
				*komsu = i+2;
			}
		}
	}
}

int main() {
	int i, daireler[10];
	printf("Dairelerdeki komsularin dogum yillarini giriniz(10 adet): ");
	for(i = 0 ; i < 10 ; i++) {
		scanf("%d", &daireler[i]);
	}
	int enYasli, komsu;
	enYasliKomsuyuBul(daireler, 10, &enYasli, &komsu);
	printf("\nEn yasli %d numarali dairede", enYasli);
	printf("\nOnun kat komsusu %d numarali dairede", komsu);
	return 0;
}
