#include <stdio.h>

int guncelle(int, int, int, int, int *, int *, int *);

int main() {
	int saat, dakika, saniye;
	printf("Zamani giriniz(saat, dakika, saniye) = ");
	scanf("%d%d%d", &saat, &dakika, &saniye);
	int eklenecek;
	printf("Eklenecek sureyi giriniz(saniye) = ");
	scanf("%d", &eklenecek);
	
	int yeniSaat, yeniDakika, yeniSaniye;
	guncelle(saat, dakika, saniye, eklenecek, &yeniSaat, &yeniDakika, &yeniSaniye);
	printf("Yeni zaman = %d : %d : %d", yeniSaat, yeniDakika, yeniSaniye);
	return 0;
}

int guncelle(int saat, int dakika, int saniye, int eklenecek, int *yeniSaatPtr, int *yeniDakikaPtr, int *yeniSaniyePtr) {

	*yeniSaniyePtr = (saniye + eklenecek) % 60;
	*yeniDakikaPtr = (dakika + (saniye + eklenecek)/60) % 60;
	*yeniSaatPtr = saat + (dakika + (saniye + eklenecek)/60)/60;
}
