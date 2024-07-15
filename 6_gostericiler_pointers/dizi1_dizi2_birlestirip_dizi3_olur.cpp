#include <stdio.h>

void ekle(int *dizi1, int n1, int *dizi2, int n2, int *dizi3, int n3) {
    for(int i = 0; i < n1; i++) {
        dizi3[i] = dizi1[i];
    }
    for(int i = 0; i < n2; i++) {
        dizi3[i + n1] = dizi2[i];
    }
}

int main() {
	int dizi1[5] = {1, 2, 3, 4, 5};
	int dizi2[5] = {6, 7, 8, 9, 10};
	int dizi3[10];
	
	ekle(dizi1, 5, dizi2, 5, dizi3, 10);
	for(int i = 0 ; i < 10 ; i++) {
		printf("%d ", dizi3[i]);
	}
	return 0;
}
