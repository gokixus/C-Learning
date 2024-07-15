#include <stdio.h>

int main() {
	int sehir[6][6];
	int i, j;
	int toplam = 0;
	int yolculuk;
	
	for(i = 0 ; i < 6 ; i++) {
		printf("%d. sehrin tum sehirlere mesafesini giriniz: ", i+1);
		for(j = 0 ; j < 6 ; j++) {
			scanf("%d", &sehir[i][j]);
		}
	}
	
	printf("\n");
	do {
		printf("Yolculuk bilgisini giriniz(Durdurmak icin 0): ");
		scanf("%d", &yolculuk);
		toplam += sehir[yolculuk/10-1][yolculuk%10-1];
		
	} while(yolculuk != 0);
	
	printf("\nToplam katledilen yol: %d km", toplam);
	
}
