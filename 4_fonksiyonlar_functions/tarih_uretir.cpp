#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tarihUret(char mevsim) {
	int ay, gun, yil;
	
	if(mevsim == 's'){
		ay = rand() % 3 + 9;
	}
	else if(mevsim == 'i') {
		ay = rand() % 3 + 3;
	}
	else if(mevsim == 'y') {
		ay = rand() % 3 + 6;
	}
	else if(mevsim == 'k') {
		int rastgeleSayi = rand() % 3;
		if(rastgeleSayi == 0) {
			ay = 12;
		}
		else if(rastgeleSayi == 1) {
			ay = 1;
		}
		else {
			ay = 2;
		}
	}
	else {
		printf("Gecersiz mevsim ayi ! \n");
		return 0;
	}
	
	gun = rand() % 30;
	yil = rand() % 51 + 2023;
	printf("%d/%d/%d\n", gun, ay, yil);
}

int main() {
	srand(time(NULL));
	
	tarihUret('s');
	tarihUret('i');
	tarihUret('y');
	tarihUret('k');
	
	return 0;
	
}
