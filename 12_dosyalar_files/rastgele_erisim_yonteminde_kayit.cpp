#include <stdio.h>

struct musteriler{
	int sira;
	char ad[15];
	char soyad[10];
	double borc;
};

typedef struct musteriler Musteriler;

int main() {
	int sira;
	Musteriler musteri;
	FILE *cfPtr;
	
	if((cfPtr = fopen("musteri.dat", "r+")) == NULL) {
		printf("Dosya acilamadi\n");
		return 1;
	}
	
	printf("Sira numarinizi giriniz(1-100): ");
	scanf("%d", &sira);
	
	fseek(cfPtr, (sira-1)*sizeof(Musteriler), SEEK_SET);
	fread(&musteri, sizeof(struct musteriler), 1, cfPtr);
	
	if(musteri.sira != 0) {
		printf("%d. sirada veri var\n", musteri.sira);
		printf("%-6d %-16s %-11s %10.2f\n", musteri.sira, musteri.ad, musteri.soyad, musteri.borc);
	} else {
		printf("Ad, soyad, borc ?\n");
		scanf("%s%s%lf", musteri.ad, musteri.soyad, &musteri.borc);
		musteri.sira = sira;
		fseek(cfPtr, (sira-1)*sizeof(Musteriler), 0);
		fwrite(&musteri, sizeof(Musteriler), 1, cfPtr);	
	}
	fclose(cfPtr);
	return 0;
}
