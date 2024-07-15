#include <stdio.h>

int icindeVarMi(int [], int, int [], int);

int main() {
	int dizi1[7] = {3, 12, 1, 12, 7, 3, 12};
	int dizi2[3] = {3, 12, 1};
	
	printf("Sonuc = %d", icindeVarMi(dizi1, 7, dizi2, 3));
}

int icindeVarMi(int a1[], int n1, int a2[], int n2) {
	int i, j;
	for(i = 0 ; i <= n1-n2 ; i++) {
		for(j = 0 ; j < n2 ; j++) {
			if(a1[i+j] != a2[j]) {
				break;
			}
		}
		if(j == n2) {
			return 1;
		}
	}
	return 0;
}
