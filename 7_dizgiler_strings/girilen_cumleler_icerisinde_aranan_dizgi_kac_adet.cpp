#include <stdio.h>
#include <string.h>

int main() {
	char cumle[3][100];
	char aranan[100];
	int i, j, k, adet = 0;
	
	for(i = 0 ; i < 3 ; i++) {
		fgets(cumle[i], 100, stdin);
	}
	printf("Aranacak dizgi: ");
	scanf("%s", aranan);
	for(i = 0 ; i < 3 ; i++) {
		int uzunluk1 = strlen(cumle[i]);
		int uzunluk2 = strlen(aranan);
		for(j = 0 ; j < uzunluk1 - uzunluk2 + 1; j++) {
			for(k = 0 ; k < uzunluk2 ; k++) {
				if(cumle[i][j+k] != aranan[k]) {
					break;
				}
			}
			if(k == uzunluk2) {
				adet++;
			}
		}
	}
	
	printf("Girilen cumleler icerisinde %d adet \"%s\" vardir.", adet, aranan);
	return 0;
}
