#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void renkMesajiYaz(int renk) {
	int rastgeleRenk = rand() % 10;
	while(rastgeleRenk == renk) {
		rastgeleRenk = rand() % 10;
	}
	printf("Hic begenmedim!\n");
	switch(rastgeleRenk) {
		case 0:
			printf("Siyah renge boyayin.");
			break;
		case 1:
			printf("Kahverengi renge boyayin.");
			break;
		case 2:
			printf("Kirmizi renge boyayin.");
			break;
		case 3:
			printf("Turuncu renge boyayin.");
			break;
		case 4:
			printf("Sari renge boyayin.");
			break;
		case 5:
			printf("Yesil renge boyayin.");
			break;
		case 6:
			printf("Mavi renge boyayin.");
			break;
		case 7:
			printf("Mor renge boyayin.");
			break;
		case 8:
			printf("Gri renge boyayin.");
			break;
		case 9:
			printf("Beyaz renge boyayin.");
			break;
	}
}

int main() {
	srand(time(NULL));
	
	renkMesajiYaz(0);
	printf("\n\n\n");
	renkMesajiYaz(2);
	
	return 0;
}
