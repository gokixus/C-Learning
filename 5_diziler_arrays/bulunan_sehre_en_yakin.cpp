#include <stdio.h>

int main() {
	int sehir[6][6];
	int i, j;
	int numara;
	int enYakin = 10000;
	
	for(i = 0 ; i < 6 ; i++) {
		printf("%d. sehrin tum sehirlere mesafesini giriniz: ", i+1);
		for(j = 0 ; j < 6 ; j++) {
			scanf("%d", &sehir[i][j]);
		}
	}
	
	printf("\nBulundugunuz sehrin numarasini giriniz: ");
	scanf("%d", &numara);
	
	for(j = 0 ; j < 6 ; j++) {
		if(j != numara-1 && sehir[numara-1][j] < enYakin){
			enYakin = j;
		}
	}
	
	printf("\nBulundugunuz sehre en yakin sehir : %d (%d km mesafede)", enYakin+1, sehir[numara-1][enYakin]);
}
