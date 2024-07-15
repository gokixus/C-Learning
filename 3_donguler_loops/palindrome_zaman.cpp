#include <stdio.h>

int main() {
	int saat, dakika;
	int saatOn, saatBir;
	int dakikaOn, dakikaBir;
	
	printf("Palindrome zamanlar: \n");
	for(saat=0 ; saat<24 ; saat++) {
		saatOn = saat/10;  //saatin onlar basamagi//
		saatBir = saat%10; //saatin birler basamagi//
		for(dakika=0 ; dakika<60 ; dakika++){
			dakikaOn = dakika/10;
			dakikaBir = dakika%10;
			if(saatOn == dakikaBir && saatBir == dakikaOn)
			    printf("%d%d:%d%d\n", saatOn, saatBir, dakikaOn, dakikaBir);
		}
	}
	return 0;
}
