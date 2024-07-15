#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zarAt(int, char);

int main() {
	srand(time(0));
	
	printf("\nIlk cagriliyor. \n");
	zarAt(100, 'B');
	printf("\nIkinci cagriliyor. \n");
	zarAt(500, 'A');
	return 0;
}

int zarAt(int zar, char harf) {
	int sayac = 0;
	for(int i = 1 ; i <= zar ; i++) {
		int zarYuzu = rand() % 6 + 1;
		switch (harf) {
            case 'A':
                if (zarYuzu == 6) {
                    sayac++;
                }
                break;
            case 'E':
                if (zarYuzu == 5) {
                    sayac++;
                }
                break;
            case 'D':
                if (zarYuzu == 4) {
                    sayac++;
                }
                break;
            case 'U':
                if (zarYuzu == 3) {
                    sayac++;
                }
                break;
            case 'K':
                if (zarYuzu == 2) {
                    sayac++;
                }
                break;
            case 'B':
                if (zarYuzu == 1) {
                    sayac++;
                }
                break;
        }
    }
    printf("%c yuzu %d kez geldi.\n", harf, sayac);
}
