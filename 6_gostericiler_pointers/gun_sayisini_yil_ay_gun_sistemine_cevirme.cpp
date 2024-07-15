#include <stdio.h>

int ayristir(int, int *, int *, int *);

int main() {
	int gun, yil, ay, yeni_gun, sonuc;
	printf("Gun sayisini giriniz: ");
	scanf("%d", &gun);
	
	sonuc = ayristir(gun, &yil, &ay, &yeni_gun);
	
	printf("\nBu sure %d yil, %d ay, %d gun eder", yil, ay, yeni_gun);
	return 0;
}

int ayristir(int gunP, int *yilPtr, int *ayPtr, int *yeni_gunPtr) {
	*yilPtr = gunP / 365;
	*ayPtr = (gunP % 365) / 30;
	*yeni_gunPtr = ((gunP % 365) % 30);
}
