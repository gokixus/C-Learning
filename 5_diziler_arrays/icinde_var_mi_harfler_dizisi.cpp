#include <stdio.h>

char icindeVarMi(char [], int, char [], int);

int main() {
	char dizi1[6] = {'a', 'n', 'k', 'a', 'r', 'a'};
	char dizi2[3] = {'k', 'a', 'r'};
	
	printf("Sonuc : %d", icindeVarMi(dizi1, 6, dizi2, 3));
}

char icindeVarMi(char a[], int x, char b[], int y) {
	int i, j;
	for(i = 0 ; i <= x-y ; i++) {
		for(j = 0 ; j < y ; j++) {
			if(a[i+j] != b[j]) {
				break;
			}
		}
		if(j == y) {
			return 1;
		}
	}
	return 0;
}
