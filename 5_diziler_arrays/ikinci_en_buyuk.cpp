#include <stdio.h>

float ikinciEnBuyuk(float [], int);

int main() {
	int eleman;
	int i;
	printf("Eleman sayisini giriniz: ");
	scanf("%d", &eleman);
	
	float dizi[eleman];
	printf("Elemanlarini giriniz: ");
	for(i = 0 ; i < eleman ; i++) {
		scanf("%f", &dizi[i]);
	}
	
	printf("Dizinin ikinci en buyugu = %0.2f", ikinciEnBuyuk(dizi, eleman));
	return 0;
}

float ikinciEnBuyuk(float a[], int n) {
	int i, j;
	float temp;
	for(i = 0 ; i < n ; i++) {
		for(j = 0 ; j < n ; j++) {
			if(a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for(i = 0 ; i < n ; i++){
		return a[i+1];
	}	
}
