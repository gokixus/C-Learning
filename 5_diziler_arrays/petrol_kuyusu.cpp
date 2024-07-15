#include <stdio.h>

int main() {
	int sertlik[5][4];
	int i, j;
	int toplam = 0;
	int min_toplam = 100000;
	int kuyu = 0, katman = 0;
	
	for(i = 0 ; i < 5 ; i++) {
		printf("%d. Katman (1. kuyudan 4. kuyuya dogru) : ", i+1);
		for(j = 0 ; j < 4 ; j++) {
			scanf("%d", &sertlik[i][j]);
		}
	}
	
	for(i = 0 ; i < 4 ; i++) {
		for(j = 0 ; j < 5 ; j++) {
			toplam += sertlik[j][i];
		}
		if(toplam < min_toplam) {
			min_toplam = toplam;
			kuyu = i;
		}
		toplam = 0;
	}
	
	for(j = 0 ; j < 5 ; j++) {
		toplam += sertlik[j][kuyu];
		if(toplam > 10) {
			katman = j;
			break;
		}
	}
	
	printf("Burgu %d. Kuyunun %d. Katmaninda degistirilir.", kuyu+1, katman+1);
}
