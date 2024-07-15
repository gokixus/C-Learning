#include <stdio.h>

int main(){
	char urun;
	printf("*****URUN SECENEKLERÝ*****");
	printf("\n(T veya t) Transistor");
	printf("\n(D veya d) Direnc");
	printf("\n(K veya k) Kondansator");
	printf("\n************************");
	printf("\nSeciminizi giriniz: ");
	scanf("%c", &urun);
	printf("************************");
	
	int transistor, direnc, kondansator;
	float indirim1, indirim2, indirim3;
	
	switch(urun) {
		case 'T':
		case 't':
			printf("\nNe kadarlik transistor alacaksiniz ? : ");
			scanf("%d", &transistor);
			indirim1 = transistor - (transistor*10/100);
			if(1000<=transistor)
			    printf("Odemeniz = %0.2f TL", indirim1);
			if(transistor<1000)
			    printf("Odemeniz = %d", transistor);
			break;
		case 'D':
		case 'd':
			printf("\nNe kadarlik direnc alacaksiniz ? : ");
			scanf("%d", &direnc);
			indirim2 = direnc - (direnc*5/100);
			if(100<=direnc)
			    printf("Odemeniz = %0.2f TL", indirim2);
			if(direnc<100)
			    printf("Odemeniz = %d", direnc);
			break;
		case 'K':
		case 'k':
			printf("\nNe kadarlik kondansator alacaksiniz ? : ");
			scanf("%d", &kondansator);
			indirim3 = kondansator - (kondansator*8/100);
			if(500<=kondansator)
			    printf("Odemeniz = %0.2f TL", indirim3);
			if(kondansator<500)
			    printf("Odemeniz = %d TL", kondansator);
			break;
		default:
			printf("\nYanlis harf girdiniz!!!\nLutfen dogru giriniz ");
	}
	return 0;
}
