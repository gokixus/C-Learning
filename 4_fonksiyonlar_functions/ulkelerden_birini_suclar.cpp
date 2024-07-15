#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bahaneYaz(int);

int main() {
	srand(time(NULL));
	int sayi = rand() % 10;
	
	bahaneYaz(sayi);
	bahaneYaz(sayi);
	
	return 0;
}

void bahaneYaz(int ulke) {
	int rastgeleUlke = rand() % 10;
	while(rastgeleUlke == ulke) {
		rastgeleUlke = rand() % 10;
	}
	switch(rastgeleUlke) {
		case 0:
			printf("Bu isin arkasinda Amerika vardir.\n");
			break;
		case 1:
			printf("Bu isin arkasinda Japonya vardir.\n");
			break;
		case 2:
			printf("Bu isin arkasinda Ispanya vardir.\n");
			break;
		case 3:
			printf("Bu isin arkasinda Fransa vardir.\n");
			break;
		case 4:
			printf("Bu isin arkasinda Rusya vardir.\n");
			break;
		case 5:
			printf("Bu isin arkasinda Katar vardir.\n");
			break;
		case 6:
			printf("Bu isin arkasinda Almanya vardir.\n");
			break;
		case 7:
			printf("Bu isin arkasinda Ingiltere vardir.\n");
			break;
		case 8:
			printf("Bu isin arkasinda Cin vardir.\n");
			break;
		case 9:
			printf("Bu isin arkasinda Turkiye vardir.\n");
			break;
	}
}
