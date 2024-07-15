#include <stdio.h>

int main() {
	float toplam=0;
	float ogrenciSayisi=0;
	int notu;
	float ortalama;
	
	do{
		printf("Bir not giriniz(kapatmak icin -1): ");
		scanf("%d", &notu);
		if(notu != -1) 
		    toplam+=notu;
		    ogrenciSayisi++;
	}while(notu != -1);
	if(ogrenciSayisi != 0)
	    ortalama = toplam/ogrenciSayisi;
	    printf("Ortalama: %f", ortalama);
	return 0;
}
