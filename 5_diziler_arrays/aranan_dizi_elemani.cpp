#include <stdio.h>

int kacTaneVar(int [], int, int [], int);

int main() {
	int dizi1[7] = {3, 12, 1 , 12, 7, 3, 12};
	int dizi2[3] = {3, 12, 41};
	int c;
	
	c = kacTaneVar(dizi1, 7, dizi2, 2);
	printf("Sonuc = %d", c);
}

int kacTaneVar(int a1[], int n1, int a2[], int n2) {
	int i;
	int aranan = 3;
	int adet1 = 0, adet2 = 0;
	
	for(i = 0 ; i < n1 ; i++) {
		if(a1[i] == aranan) {
			adet1 = 1;
		}
	}
	for(i = 0 ; i < n2 ; i++) {
		if(a2[i] == aranan) {
			adet2 = 1;
		}
	}
	
	return adet1 + adet2;
}
