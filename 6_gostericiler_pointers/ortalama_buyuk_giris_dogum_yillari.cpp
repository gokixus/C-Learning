#include <stdio.h>

int bursiyerBul(float, int, int, float, int, int, float *, int *, int *);

int main() {
	float not1, not2;
	int dogumYil1, dogumYil2;
	int girisYil1, girisYil2;
	float bNot;
	int bdogumYil, bgirisYil;
	printf("1. ogrencinin bilgileri(not, giris yili, dogum yili): ");
	scanf("%f%d%d", &not1, &girisYil1, &dogumYil1);
	printf("2. ogrencinin bilgileri(not, giris yili, dogum yili): ");
	scanf("%f%d%d", &not2, &girisYil2, &dogumYil2);
	
	bursiyerBul(not1, girisYil1, dogumYil1, not2, girisYil2, dogumYil2, &bNot, &bdogumYil, &bgirisYil);
	printf("\nDaha basarili olan,\nortalamasi %0.2f, giris yili %d ve %d yilinda dogmustur.", bNot, bgirisYil, bdogumYil);
	return 0;
}

int bursiyerBul(float not1_p, int girisYil1_p, int dogumYil1_p, float not2_p, int girisYil2_p, int dogumYil2_p, float *bNot_p, int *bdogumYil_p, int *bGirisYil_p) {
	if(not1_p > not2_p) {
		*bNot_p = not1_p;
		*bGirisYil_p = girisYil1_p;
		*bdogumYil_p = dogumYil1_p;
	}
	if(not2_p > not1_p) {
		*bNot_p = not2_p;
		*bGirisYil_p = girisYil2_p;
		*bdogumYil_p = dogumYil2_p;
	}
	if(not1_p == not2_p) {
		*bNot_p = not2_p;
		if(girisYil1_p > girisYil2_p) {
			*bGirisYil_p = girisYil1_p;
			*bdogumYil_p = dogumYil1_p;
		}
		if(girisYil2_p > girisYil1_p) {
			*bGirisYil_p = girisYil2_p;
			*bdogumYil_p = dogumYil2_p;
		}
		if(girisYil1_p == girisYil2_p){
			*bGirisYil_p = girisYil2_p;
			if(dogumYil1_p > dogumYil2_p) {
				*bdogumYil_p = dogumYil1_p;
			}
			if(dogumYil2_p > dogumYil1_p) {
				*bdogumYil_p = dogumYil2_p;
			}
		}
	}
}
