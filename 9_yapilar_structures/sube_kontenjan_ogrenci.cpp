#include <stdio.h>
#include <string.h>

struct sube {
	char isim[20];
	int kontenjan;
	int ogrenciSayisi;
}s1, yeniSube;

void subeUret(struct sube *, struct sube *);

int main() {
	printf("Subenin isim, kontenjan ve ogrenci sayisini giriniz: ");
	scanf("%s%d%d", s1.isim, &s1.kontenjan, &s1.ogrenciSayisi);
	subeUret(&s1, &yeniSube);
	printf("\nYeni sube bilgileri: %s, %d, %d", yeniSube.isim, yeniSube.kontenjan, yeniSube.ogrenciSayisi);
	return 0;
}

void subeUret(struct sube *s1, struct sube *yeniSube) {
	if(s1->ogrenciSayisi > s1->kontenjan) {
		yeniSube->ogrenciSayisi = s1->ogrenciSayisi - s1->kontenjan;
		strncat(yeniSube->isim, "EK", 2);
		yeniSube->kontenjan = s1->kontenjan;
	} else {
		strncat(yeniSube->isim, "0", 1);
		yeniSube->ogrenciSayisi = 0;
		yeniSube->kontenjan = 0;
	}
}
