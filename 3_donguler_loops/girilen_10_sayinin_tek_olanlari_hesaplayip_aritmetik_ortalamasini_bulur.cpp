//Klavyeden girilen 10 adet pozitif tam sayiden tek olanlarýn ortalamasýný bulur//
#include <stdio.h>

int main() {
	int sayi;
	int toplam = 0;
	int teksayiAdet = 0;
	float ortalama;
	
	printf("Pozitif sayi giriniz(10 adet): ");

	for(int i = 0 ; i<10 ; i++) {
	    sayi++;
	    scanf("%d", &sayi);
	    if(sayi%2 == 1) {
	    	toplam += sayi;
	    	teksayiAdet++;
		}
	}
	if(teksayiAdet == 0) {
		printf("\nGirilen sayilarin hepsi cift sayidir");
	}
	else {
		ortalama = (float)toplam/teksayiAdet;
		printf("Girilen %d adet sayinin aritmetik ortalamasi = %0.1f", teksayiAdet, ortalama);
	}
	return 0;
}
