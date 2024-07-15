#include <stdio.h>

void eleme(int a[], int n) {
    int i, j, adet;
	for(i = 0; i < n; i++) {
        adet = 0;
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                a[j] = -1;
                adet = 1;
            }
        }
        if (adet == 1) {
            a[i] = -1;
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int dizi[10], i;    
    printf("Dizinin elemanlarini giriniz: ");
    for(i = 0 ; i < 10 ; i++) {
    	scanf("%d", &dizi[i]);
	}
	
	printf("\nDizinin son hali = ");
    eleme(dizi, 10);

    return 0;
}

