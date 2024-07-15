#include <stdio.h>

int main() {
	int sayi1;
	int sayi2;
	int obeb;
	int okek;
	
	printf("OKEK bulmak icin iki tam sayi giriniz : ");
    scanf("%d%d", &sayi1, &sayi2);
	
	while(sayi1 < 0 || sayi2 < 0) {
        printf("Hatali girdi. Her iki sayiyi de pozitif giriniz: ");
        scanf("%d%d", &sayi1, &sayi2);
    }
	
	for(int i = 1 ; i <= sayi1 && i <= sayi2 ; i++) {
		if(sayi1 % i == 0 && sayi2 % i == 0) {
			obeb = i;
		}
	}
	okek = (sayi1*sayi2)/obeb;
	printf("OKEK(%d, %d) : %d", sayi1, sayi2, okek);
	
	return 0;
}
