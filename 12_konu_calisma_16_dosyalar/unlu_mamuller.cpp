#include <stdio.h>
#include <string.h>

#define TOPLAM_URUN 50

int main() {
	FILE *istekOku = fopen("istek.txt", "r");
	FILE *depoOku = fopen("depo.txt", "r");
	if(!istekOku || !depoOku) {
		perror("Dosya acilamadi.\n");
		return 1;
	}
	FILE *nekaldiYazdir = fopen("nekaldi.txt", "w");
	if(!nekaldiYazdir) {
		perror("Dosya olusturulamadi.\n");
		return 1;
	}
	
	char urunler1[TOPLAM_URUN][15], urunler2[TOPLAM_URUN][15];
	int miktar1[TOPLAM_URUN], miktar2[TOPLAM_URUN];
		
	int toplamUrun = 0;
	while(fscanf(istekOku, "%s %d", urunler1[toplamUrun], &miktar1[toplamUrun]) != EOF) {
		int bulundu = 0;
		for(int i = 0 ; i < toplamUrun ; i++) {
			if(strcmp(urunler1[i], urunler1[toplamUrun]) == 0) {
				miktar1[i] += miktar1[toplamUrun];
				bulundu = 1;
				break;
			}
		}
		if(!bulundu) {
			toplamUrun++;
		}
	}
	
	while(fscanf(depoOku, "%s %d", urunler2[toplamUrun], &miktar2[toplamUrun]) != EOF) {
		for(int i = 0 ; i < toplamUrun ; i++) {
			if(strcmp(urunler1[i], urunler2[toplamUrun]) == 0) {
				if(miktar1[i] >= miktar2[toplamUrun]) {
					int toplam = miktar1[i] - miktar2[toplamUrun];
					fprintf(nekaldiYazdir, "%s %d\n", urunler1[i], toplam);
				} else {
					fprintf(nekaldiYazdir, "%s karsilanamaz\n", urunler1[i]);
				}
			}
		}
	}
	
	fclose(istekOku);
	fclose(depoOku);
	fclose(nekaldiYazdir);
	printf("nekaldi.txt dosyasi olusturuldu.\n");
	return 0;
}
