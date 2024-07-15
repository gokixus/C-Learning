#include <stdio.h>

int siraliMi(int [], int);

int main() {
	int boyut, i;
	printf("Dizinin boyutunu giriniz: ");
	scanf("%d", &boyut);
	
	int dizi[boyut];
	printf("Dizinin elamanlarini giriniz: ");
	for(i = 0 ; i <= boyut-1 ; i++) {
		scanf("%d", &dizi[i]);
	}
	
	printf("%d", siraliMi(dizi, boyut));
}

int siraliMi(int a[], int n) {
	if(n == 1) {
		return 1;
	}
	else {
		for(int i = 0 ; i < n-1 ; i++) {
			if(a[i] < a[i-1]) { //artan siralama ise 1 dondur//
				return 0;
			}
		}
		return 1;
	}
}
