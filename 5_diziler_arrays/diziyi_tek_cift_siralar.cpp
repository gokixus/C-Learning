#include <stdio.h>

void tekCiftDuzenle(int [], int);

int main() {
	int i, dizi[15];
	
	printf("Dizinin elemanlarini giriniz(15 adet): ");
	for(i = 0 ; i < 15 ; i++) {
		scanf("%d", &dizi[i]);
	}
	
	printf("Dizinin duzenlenmis hali:\n");
	tekCiftDuzenle(dizi, 15);
	
	return 0;
}

void tekCiftDuzenle(int a[], int n) {
	int i;
	int tek[n], cift[n];
	int tekSayisi = 0 , ciftSayisi = 0;
	
	for(i = 0 ; i < n ; i++) {
		if(a[i] % 2 == 0) {
			cift[ciftSayisi++] = a[i];
		}
		else {
			tek[tekSayisi++] = a[i];
		}
	}
	
	for(i = 0 ; i < tekSayisi ; i++) {
		printf("%d ", tek[i]);
	}
	
	printf("//// ");
	for(i = 0 ; i < ciftSayisi ; i++) {
		printf("%d ", cift[i]);
	}
}
