#include <stdio.h>

struct musteriler{
	int sira;
	char ad[15];
	char soyad[10];
	double borc;
};

int main() {
	int i;
	struct musteriler boskayit = {0, "", "", 0.0};
	FILE *cfPtr;
	
	if((cfPtr = fopen("musteri.dat", "w")) == NULL) {
		printf("Dosya olusturulmadi\n");
	} else {
		for(i = 1 ; i <= 100 ; i++) {
			fwrite(&boskayit, sizeof(musteriler), 1, cfPtr);
			fclose(cfPtr);
		}
	}
	
	return 0;
}
