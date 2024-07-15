#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define SIZE_A 10
#define SIZE_B 5

int altKumesiMi(int a[], int size_a, int b[], int size_b) {
	for(int i = 0 ; i < size_b ; i++) {
		int aranan = 0;
		for(int j = 0 ; j < size_a ; j++) {
			if(b[i] == a[j]) {
				aranan = 1;	
				break;
			}
		}
		if(aranan == 0 ) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int i, dizi1[SIZE_A], dizi2[SIZE_B];
	srand(time(NULL));
	printf("A dizisinin elemanlari: ");
	for(i = 0 ; i < SIZE_A ; i++) {
		dizi1[i] = rand() % 100 + 1;
		printf("%d, ", dizi1[i]);
	}
	
	printf("\nB dizisinin elemanlarini giriniz: ");
	for(i = 0 ; i < SIZE_B ; i++) {
		scanf("%d", &dizi2[i]);
	}
	
	if(altKumesiMi(dizi1, SIZE_A, dizi2, SIZE_B)) {
		printf("B dizisi, A dizisinin kumesidir.");
	}
	else{
		printf("B dizisi, A dizisinin kumesi degildir");
	}
	return 0;
}
