#include <stdio.h>
#include <math.h>

void ortalamayaYakinBul(int *dizi, int n, float *ortalamaPtr, int *elemanPtr, int *indisPtr) {
	int i, toplam = 0;
	for(i = 0 ; i < n ; i++) {
		toplam += dizi[i];
	}
	*ortalamaPtr = (float)toplam / 9;
	
	float fark = fabs(*ortalamaPtr - dizi[0]);
    *elemanPtr = dizi[0];
    *indisPtr = 0;
    
    for (int i = 1; i < n; i++) {
        if (fabs(*ortalamaPtr - dizi[i]) < fark) {
            fark = fabs(*ortalamaPtr - dizi[i]);
            *elemanPtr = dizi[i];
            *indisPtr = i;
        }
    }
}

int main() {
	int i, dizi[9];
	printf("Dizi elemanlarini girin(9 adet): ");
	for(i = 0 ; i < 9 ; i++) {
		scanf("%d", &dizi[i]);
	}
	int indis, eleman;
	float ortalama;
	ortalamayaYakinBul(dizi, 9, &ortalama, &eleman, &indis);
	printf("\nOrtalama : %0.2f", ortalama);
	printf("\nOrtalamaya en yakin eleman: %d", eleman);
	printf("\nOrtalamaya en yakin elemanin indisi: %d", indis);
}
