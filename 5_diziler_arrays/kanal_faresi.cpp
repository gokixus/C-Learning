#include <stdio.h>

int main() {
	int peynir[5][4];
	int toplamPeynir[5] = {0, 0, 0, 0, 0};
	int maxPeynir = 0, maxBolum = 0;
	int i, j;
	int yenilenPeynir = 0;
	
	printf("Kanaldaki peynir miktarlarini giriniz\n");
	for(i = 0 ; i < 5 ; i++) {
		printf("%d. Kanal (1. bolumden 4. bolume dogru) : ", i+1);
		for(j = 0 ; j < 4 ; j++) {
			scanf("%d", &peynir[i][j]);
			toplamPeynir[i] += peynir[i][j];
		}
	}
	
	for(i = 0 ; i < 5 ; i++) {
		if(toplamPeynir[i] > maxPeynir) {
			maxPeynir = toplamPeynir[i];
			maxBolum = i;
		}
	}
	
	for(j = 0 ; j < 4 ; j++) {
		if(yenilenPeynir + peynir[maxBolum][j] > 5) {
			break;
		}
		yenilenPeynir += peynir[maxBolum][j];
	}
	
	printf("Kanal faresi %d. kanalin %d. bolgesinde uykuya daldi.", maxBolum+1, j+1);
	
}
