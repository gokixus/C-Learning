#include <stdio.h>

void tekCiftDuzenle(int [], int);

int main() {
	int i, ogrenciSayisi;
	printf("Ogrenci sayisi giriniz: ");
	scanf("%d", &ogrenciSayisi);
	if(ogrenciSayisi > 100) {
		printf("Ogrenci sayisi 100'den fazla olmamalidir.\n");
		printf("Ogrenci sayisi giriniz: ");
		scanf("%d", &ogrenciSayisi);
	}
	
	int ogrenci_no[ogrenciSayisi];
	printf("Ogrenci numaralarini giriniz(%d adet): ", ogrenciSayisi);
	for(i = 0 ; i < ogrenciSayisi ; i++) {
		scanf("%d", &ogrenci_no[i]);
	}
	
	tekCiftDuzenle(ogrenci_no, ogrenciSayisi);
	printf("Ogrenci numaralarin bir tek, bir cift siralanmis hali:\n");
	for(i = 0 ; i < ogrenciSayisi ; i++) {
		printf("%d ", ogrenci_no[i]);
	}
	
	return 0;
}

void tekCiftDuzenle(int a[], int n) {
	int i, t;
	int tek[n], cift[n];
	int tek_sayisi = 0, cift_sayisi = 0;
	
	//buyukten kucuge siralar//
	for(i = 0 ; i < n-1 ; i++) { 
		for(t = 0 ; t < n-i-1 ; t++) {
			if(a[t] < a[t+1]) {
				int yedek = a[t];
				a[t] = a[t+1];
				a[t+1] = yedek;
			}
		}
	}
	
	//bir tek bir cift siralar//
	for(i = 0 ; i < n ; i++) {
		if(a[i] % 2 == 0) {
			cift[cift_sayisi++] = a[i];
		}
		else {
			tek[tek_sayisi++] = a[i];
		}
	}
	
	int j = 0, k = 0;
	for(i = 0 ; i < n ; i++) {
		if(i % 2 == 0 && j < tek_sayisi) {
			a[i] = tek[j++];
		}
		else if(i % 2 != 0 && k < cift_sayisi) {
			a[i] = cift[k++];
		}
		else if(j < tek_sayisi) {
			a[i] = tek[j++];
		}
		else {
			a[i] = cift[k++];
		}
	}
}
