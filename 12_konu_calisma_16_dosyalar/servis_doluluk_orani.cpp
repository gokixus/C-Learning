#include <stdio.h>

int main() {
	FILE *servislerOku = fopen("servisler.txt", "r");
	FILE *iptallerYazdir = fopen("iptaller.txt", "w");
	FILE *devamYazdir = fopen("devam.txt", "w");
	if(!servislerOku || !iptallerYazdir || !devamYazdir) {
		perror("Dosya acilamadi veya olusturulamadi.\n");
		return 1;
	}
	
	char plaka[15];
	int koltuk, yolcuSayisi;
	int toplamiptalArac = 0, toplamdevamArac = 0;
	
	while(fscanf(servislerOku, "%s %d %d", plaka, &koltuk, &yolcuSayisi) != EOF) {
		float dolulukOrani = (float)yolcuSayisi/koltuk;
		if(dolulukOrani >= 0.50) {
			fprintf(devamYazdir, "%s %0.2f\n", plaka, dolulukOrani);
			toplamdevamArac++;
		} else {
			fprintf(iptallerYazdir, "%s %0.2f\n", plaka, dolulukOrani);
			toplamiptalArac++;
		}
	}
	fprintf(devamYazdir, "\nToplam %d arac", toplamdevamArac);
	fprintf(iptallerYazdir, "\nToplam %d arac", toplamiptalArac);
	
	fclose(servislerOku);
	fclose(iptallerYazdir);
	fclose(devamYazdir);
	printf("Dosyalar olusturuldu.\n");
	return 0;
}
