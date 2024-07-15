#include <stdio.h>

int main() {
	FILE *fOku = fopen("gunluk.dat","r");
	FILE *fYazdir1 = fopen("erken.dat", "w");
	FILE *fYazdir2 = fopen("gec.dat", "w");
	if(!fOku || !fYazdir1 || !fYazdir2) {
		perror("Dosya acilamadi veya olusturulamadi.\n");
		return 1;
	}
	
	int sicilNo, saat, dakika;
	char girisCikis;
	while(fscanf(fOku, "%d %d:%d %c", &sicilNo, &saat, &dakika, &girisCikis) == 4) {
		if (girisCikis == '<') {
            if (saat > 9 || (saat == 9 && dakika > 0)) {
                int kacDakikaGec = saat * 60 + dakika - 9 * 60;
                fprintf(fYazdir2, "%d %d\n", sicilNo, kacDakikaGec);
            }
        } else if (girisCikis == '>') {
            if (saat < 17 || (saat == 17 && dakika == 0)) {
                int kacDakikaErken = 17 * 60 - saat * 60 - dakika;
                fprintf(fYazdir1, "%d %d\n", sicilNo, kacDakikaErken);
            }
        }
	}
	fclose(fOku);
	fclose(fYazdir1);
	fclose(fYazdir2);
	printf("Dosya olusturuldu.\n");
	return 0;
}
