#include <stdio.h>
#include <ctype.h>

int main() {
	char ad[25], soyad[25], bolum[5], cinsiyet, dogumYeri[25];
	int no, yas;
	long telefon;
	char devam = 'E';
	FILE *dosya;
	
	dosya = fopen("ogrenci.bilgileri.dat", "w");
	if(dosya == NULL) {
		printf("Dosya olusturulmadi\n");
		return 1;
	}
	printf("OGRENCI BILGILERI GIRIS EKRANI\n");
	while(devam != 'H') {
		printf("--------------------------------\n");
		printf("|\tADI\t\t: ");
		scanf("%s", ad);
		printf("|\tSOYADI\t\t: ");
		scanf("%s", soyad);
		printf("|\tNO\t\t: ");
		scanf("%d", &no);
		printf("|\tBOLUMU\t\t: ");
		scanf("%s", bolum);
		printf("|\tCINSIYETI\t: ");
		scanf(" %c", &cinsiyet);
		printf("|\tDOGUM YERI\t: ");
		scanf("%s", dogumYeri);
		printf("|\tYASI\t\t: ");
		scanf("%d", &yas);
		printf("|\tTELEFONU\t: ");
		scanf("%ld", &telefon);
		printf("\n--------------------------------");
		fprintf(dosya, "Ad: %s\nSoyad: %s\nNo: %d\nBölüm: %s\nCinsiyet: %c\nDoðum Yeri: %s\nYaþ: %d\nTelefon: %d\n\n",
        ad, soyad, no, bolum, cinsiyet, dogumYeri, yas, telefon);

		printf("\n\nDevam edecek misiniz(E/H): ");
		scanf(" %c", &devam);
		devam = toupper(devam);
	}
	fclose(dosya);
	return 0;
}
