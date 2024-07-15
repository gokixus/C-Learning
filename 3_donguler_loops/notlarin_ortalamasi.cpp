#include <stdio.h>

int main() {
	float toplam = 0;
	float ortalama;
	int ogrenciSayisi=0;
	int notu;
	
	while(notu != -1) {
		toplam+=notu;
		ogrenciSayisi++;
		printf("\nNotu giriniz(sonlandirmak icin -1): ");
		scanf("%d", &notu);
	}
	if(ogrenciSayisi != 0) {
		ortalama = toplam/ogrenciSayisi;
	    printf("\n\nOrtalama: %f", ortalama);
	}

	return 0;
}
