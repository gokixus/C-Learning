#include <stdio.h>

void say(int *dizi, int n, int *nSayPtr, int *pSayPtr, int *sSayPtr) {
	*nSayPtr = 0, *pSayPtr = 0, *sSayPtr = 0;
	for(int i = 0 ; i < n ; i++) {
		if(dizi[i] < 0) {
			(*nSayPtr)++;
		}
		if(dizi[i] > 0) {
			(*pSayPtr)++;
		}
		if(dizi[i] == 0) {
			(*sSayPtr)++;
		}
	}
}

int main() {
	int dizi[] = {-1, 2, 4, 6, 0, -2, 0};
	int nSay, pSay, sSay;
	say(dizi, 7, &nSay, &pSay, &sSay);
	printf("Negatif Sayisi = %d", nSay);
	printf("\nPozitif Sayisi = %d", pSay);
	printf("\nSifir sayisi = %d", sSay);
	return 0;
}
