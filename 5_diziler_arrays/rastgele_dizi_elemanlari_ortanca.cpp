#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_SIZE 50

int main() {
	int dizi[MAX_SIZE], elemanSayisi, i, j, temp;
	float ortanca;
	
	printf("Eleman sayisini giriniz: ");
	scanf("%d", &elemanSayisi);
	if(elemanSayisi > MAX_SIZE) {
		printf("Dizi boyutu 50'den fazla olamaz.\n");
		return 0;
	}
	
	srand(time(NULL));
	for(i = 0 ; i < elemanSayisi ; i++) {
		dizi[i] = rand() % 100 + 1;
	}
	
	printf("Otomatik olusturulan dizi: ");
	for(i = 0 ; i < elemanSayisi ; i++) {
		printf("%d", dizi[i]);
		if(i != elemanSayisi-1) {
			printf(", ");
		}
	}
	printf("\n");
	for(i = 0 ; i < elemanSayisi ; i++) {
		for(j = i+1 ;  j < elemanSayisi ; j++) {
			if(dizi[i] > dizi[j]) {
				temp = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = temp;
			}
		}
	}
	printf("Dizinin siralanmis hali: ");
	for(i = 0 ; i < elemanSayisi ; i++)  {
		printf("%d", dizi[i]);
		if (i != elemanSayisi - 1) {
            printf(", ");
        }
	}
	printf("\n");
	
	if(elemanSayisi % 2 == 0) {
		ortanca = (dizi[elemanSayisi/2 - 1] + dizi[elemanSayisi/2]) / 2.0;
	}
	else {
		ortanca = dizi[elemanSayisi/2];
	}
	printf("Ortanca = %0.1f", ortanca);
}
