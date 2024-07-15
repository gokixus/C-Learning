#include <stdio.h>

int main() {
	int dizi[6][6];
	int i, j;
	int toplam = 0;
	
	for(i = 0 ; i < 6 ; i++) {
		printf("%d. sehrin tum sehirlere mesafesini giriniz: ", i+1);
		for(j = 0 ; j < 6 ; j++) {
			scanf("%d", &dizi[i][j]);
		}
	}
	
	printf("\n\nAralarindaki mesafe farkli girilmis olan sehirler: ");
	for(i = 0 ; i < 6 ; i++) {
		for(j = i+1 ; j < 6 ; j++) {
			if(dizi[i][j] != dizi[j][i]) {
				printf("%d-%d, ", i+1, j+1);
				toplam++;
			}
		}

	}
	
	if(toplam > 0) {
		printf("\n%d adet uzaklik farkli girilmistir", toplam);
	}
	else {
		printf("\nUzaklik farkli girilmis yoktur.");
	}
	
	return 0;
}
