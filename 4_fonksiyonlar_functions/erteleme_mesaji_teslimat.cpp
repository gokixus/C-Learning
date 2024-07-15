#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ertelemeMesajiYaz(int);

int main() {
	srand(time(NULL));
	int rastgele = rand() % 7 + 1;
	
	ertelemeMesajiYaz(rastgele);
	ertelemeMesajiYaz(rastgele);
	
	return 0;
}

void ertelemeMesajiYaz(int gun) {
	int rastgeleGun = rand() % 7 + 1;
	
	while(rastgeleGun == gun) {
		rastgeleGun = rand() % 7 + 1;
	}
	
	switch(rastgeleGun) {
		case 1:
			printf("Pazartesi gunu teslimat yapilacak.\n");
			break;
		case 2:
			printf("Sali gunu teslimat yapilacak.\n");
			break;
		case 3:
			printf("Carsamba gunu teslimat yapilacak.\n");
			break;
		case 4:
			printf("Persembe gunu teslimat yapilacak.\n");
			break;
		case 5:
			printf("Cuma gunu teslimat yapilacak.\n");
			break;
		case 6:
			printf("Cumartesi gunu teslimat yapilacak.\n");
			break;
		case 7:
			printf("Pazar gunu teslimat yapilacak.\n");
			break;
	}
}
