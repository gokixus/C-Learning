#include <stdio.h>
#include <math.h>

void enYakiniBul(int *dizi, int n, int *arananSayiPtr, int *indisPtr, int *elemanPtr) {
	float fark = fabs(*arananSayiPtr - dizi[0]);
    *elemanPtr = dizi[0];
    *indisPtr = 0;
    
    for (int i = 1; i < n; i++) {
        if (fabs(*arananSayiPtr - dizi[i]) <= fark) {
            fark = fabs(*arananSayiPtr - dizi[i]);
            *elemanPtr = dizi[i];
            *indisPtr = i;
        }
    }
}

int main () {
	int i, dizi[9];
	printf("Dizi elemanlarini giriniz(9 adet): ");
	for(i = 0 ; i < 9 ; i++) {
		scanf("%d", &dizi[i]);
	}
	int arananSayi, indis, eleman;
	printf("Aranacak sayi: ");
	scanf("%d", &arananSayi);
	
	enYakiniBul(dizi, 9, &arananSayi, &indis, &eleman);
	printf("\nEn yakin eleman: %d", eleman);
	printf("\nEn yakin elemanin indisi: %d", indis);
	return 0;
}
