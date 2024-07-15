#include <stdio.h>

void eleme(int *dizi, int n) {
	int i, j, adet;
	for(i = 0; i < n; i++) {
        adet = 0;
        for (j = 0; j < n; j++) {
            if (i != j && dizi[i] == dizi[j]) {
                adet++;
            }
        }
        if (adet == 0) {
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

