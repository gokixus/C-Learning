#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int paraAt(int, char);

int main() {
	srand(time(0));
	
	printf("\nIlk cagriliyor.\n");
	paraAt(100, 'T');
	printf("\nIkinci cagriliyor.\n");
	paraAt(300, 'Y');
	
	return 0;
}

int paraAt(int atim_sayisi, char para_yuzu) {
	int sayac = 0;
	for(int i = 1 ; i <= atim_sayisi ; i++) {
		int rastgelePara_yuzu = rand() % 2 + 1;
		switch(para_yuzu) {
			case 'T':
				if(rastgelePara_yuzu == 1) {
					sayac++;
				}
				break;
			case 'Y':
				if(rastgelePara_yuzu == 2) {
					sayac++;
				}
				break;
			default:
				printf("Yanlis deger !");
				continue;
		}
	}
	printf("%d. kez atildi !\n%c olarak %d kez geldi. \n", atim_sayisi, para_yuzu, sayac);
}
