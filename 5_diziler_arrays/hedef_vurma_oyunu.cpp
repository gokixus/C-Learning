#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void enCokVurulanHalka(int [], int);

int main() {
	int i, atis_sayisi;
	printf("Toplam kac atis yapilsin ? : ");
	scanf("%d", &atis_sayisi);
	
	int atis[atis_sayisi];
	srand(time(NULL));
	for(i = 0 ; i < atis_sayisi ; i++) {
		atis[i] = rand() % 11;
		printf("%d. atisinizin rastgele vurdugu halka : %d\n", i+1, atis[i]);
	}
	
	enCokVurulanHalka(atis, atis_sayisi);
}

void enCokVurulanHalka(int a[], int n) {
	int i, j;
	int adet, iskalanan = 0;
	int enCokAdet = 0, enCokEden = 0;
	for(i = 0 ; i < n ; i++) {
		adet = 0;
		for(j = 0 ; j < n ; j++) {
			if(a[i] == a[j]) {
				adet++;
			}
		}
		if(a[i] == 0) {
			iskalanan++;
		}
		if(adet > enCokAdet) {
			enCokAdet = adet;
			enCokEden = a[i];
		}
	}
	
	printf("\nEn cok vurulan halka %d. numarali halkadir(%d adet)", enCokEden, enCokAdet);
	printf("\nHedef %d defa iskalamistir.", iskalanan);
	
}
