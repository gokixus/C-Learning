#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zamanUret(char cins) {
	int saat, dakika, saniye;
	
	if(cins == 's') {
		saat = rand() % 3 + 8;
	}
	else if(cins == 'o') {
		saat = rand() % 5 + 11;
	}
	else if(cins == 'a') {
		saat = rand() % 7 + 16;
	}
	else {
		printf("Gecersiz cins girdiniz ! \n");
		return 0;
	}
	
	dakika = rand() % 60;
	saniye = rand() % 60;
	printf("%02d:%02d:%02d\n", saat, dakika, saniye);
}

int main() {
	srand(time(NULL));
	zamanUret('s');
	zamanUret('o');
	zamanUret('a');
	
	return 0;
}
