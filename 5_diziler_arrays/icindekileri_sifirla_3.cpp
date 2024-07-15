#include <stdio.h>

int icindekileriSifirla(int [], int, int [], int);

int main() {
	int dizi1[7] = {3, 12, 1, 12, 7, 3, 12};
	int dizi2[3] = {3, 12};
	int i;
	
	icindekileriSifirla(dizi1, 7, dizi2, 2);
	for(i = 0 ; i < 7 ; i++) {
		printf("%d, ", dizi1[i]);
	}
	
	return 0;
}

int icindekileriSifirla(int a1[], int n1, int a2[], int n2) {
	int i, j;
	for(i = 0 ; i <= n1-n2 ; i++) {
		for(j = 0 ; j < n2 ; j++) {
			if(a1[i+j] != a2[j]) {
				break;
			}
		}
		if(j == n2) {
			a1[i] = 0;
			a1[i+1] = 0;
		}
	}
	return 0;
}
