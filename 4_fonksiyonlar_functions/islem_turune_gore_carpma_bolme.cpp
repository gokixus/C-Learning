#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void islemYaz(char islemTuru, int basamak) {
	int sayi1, sayi2, sonuc;
	
	if(basamak == 3) {
		sayi1 = rand() % 900 + 100;
		sayi2 = rand() % 900 + 100;
	}
	else if(basamak == 2) {
		sayi1 = rand() % 90 + 10;
		sayi2 = rand() % 90 + 10;
	}
	else{
		sayi1 = rand() % 10;
		sayi2 = rand() % 10;
	}
	
	if(islemTuru == '*') {
		sonuc = sayi1 * sayi2;
	}
	else {
        sonuc = sayi1 / sayi2;
    }
	
	printf("%d %c %d = %d\n", sayi1, islemTuru, sayi2, sonuc);
}

int main() {
	
	srand(time(NULL));
	
	islemYaz('*',3);
    printf("\n");
    islemYaz('/',3);
    printf("\n");
    islemYaz('*',2);
    printf("\n");
    islemYaz('/',2);
    printf("\n");
    islemYaz('*',1);
    printf("\n");
    islemYaz('/',1);
	
	return 0;
}

