#include <stdio.h>

void eleme(int *dizi, int n) {
	int i, j, adet;
	for(i = 0; i < n; i++) {
        adet = 0;
        for (j = i + 1; j < n; j++) {
            if (dizi[i] == dizi[j]) {
                dizi[j] = -1;
                adet = 1;
            }
        }
        if (adet == 1) {
            dizi[i] = -1;
        }
    }
}


int main() {
	int i, dizi[9];
	printf("Dizi elemanlarini giriniz(9 adet): ");
	for(i = 0 ; i < 9 ; i++) {
		scanf("%d", &dizi[i]);
	}
	eleme(dizi, 9);
	for(i = 0 ; i < 9 ; i++) {
		printf("%d, \n", dizi[i]);
	}
	return 0;
}
