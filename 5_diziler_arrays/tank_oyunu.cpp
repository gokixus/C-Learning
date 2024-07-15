#include <stdio.h>

char tankHangiYoneGitmeli(int oyunTahtasi[8][8], int satir, int sutun, int oyuncu) {
	int dusman = (oyuncu == 1) ? 2 : 1;
	int yonler[4] = {0, 0, 0, 0};
	int i, j;
	
	for(i = satir-1 ; i >= 0 ; i-- ) { //kuzey
		if(oyunTahtasi[i][sutun] == dusman) {
			yonler[0]++;
		} else break;
	}
	for(i = satir+1 ; i < 8 ; i++ ) {	//guney
		if(oyunTahtasi[i][sutun] == dusman) {
			yonler[1]++;
		} else break;
	}
	for(j = sutun+1 ; j < 8 ; j-- ) {	//dogu
		if(oyunTahtasi[satir][j] == dusman) {
			yonler[2]++;
		} else break;
	}
	for(j = sutun-1 ; j >= 0 ; j-- ) {	//bati
		if(oyunTahtasi[satir][j] == dusman) {
			yonler[3]++;
		} else break;
	}
	
	int maxindis = 0;
	for(i = 1 ; i < 4 ; i++) {
		if(yonler[i] > yonler[maxindis]) {
			maxindis = i;
		}
	}
	
	switch(maxindis) {
		case 0:
			return 'k';
		case 1:
			return 'g';
		case 2:
			return 'd';
		case 3:
			return 'b';
	}
}

int main() {
    int tahta[8][8] = {
        {0, 0, 0, 0, 0, 2, 2, 2},
        {0, 0, 0, 0, 0, 0, 0, 2},
        {0, 0, 1, 0, 0, 2, 0, 0},
        {0, 0, 0, 0, 2, 0, 0, 0},
        {0, 0, 0, 2, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 2},
        {0, 0, 0, 0, 0, 0, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1}
    };

    int satir = 3;
    int sutun = 3;
    int oyuncu = 1;

    char yon = tankHangiYoneGitmeli(tahta, satir, sutun, oyuncu);
    printf("Tankin gitmesi gereken yon: %c\n", yon);

    return 0;
}
