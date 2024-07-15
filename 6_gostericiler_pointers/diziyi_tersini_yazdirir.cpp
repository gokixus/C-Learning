#include <stdio.h>

void cevir(int *diziPtr, int n) {
	int bas = 0;
	int son = n-1;
	while(bas < son) {
		int temp = diziPtr[bas];
		diziPtr[bas] = diziPtr[son];
		diziPtr[son] = temp;
		bas++;
		son--;
	}
}

int main() {
	int dizi[10], i;
	printf("Dizinin elemanlari: ");
	for(i = 0 ; i < 10 ; i++) {
		scanf("%d", &dizi[i]);
	}
	
	cevir(dizi, 10);
	for(i = 0 ; i < 10 ; i++) {
		printf("%d ", dizi[i]);
	}
	return 0;
}
