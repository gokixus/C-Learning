#include <stdio.h>

int main() {
	int ilkSayi=1986;
	int toplamadet = 0;
	if(ilkSayi%75==0) {
		ilkSayi+=(75-(ilkSayi%75));
	}
	printf("Halley yildizin 4000 yilina kadar gorulebilecegi yillar: ");
	for(int i = ilkSayi ; i<=4000 ; i+=75) {
        printf("\n%d", i);
		if(2000<=i && i<3000)
		    toplamadet++;
	}
	printf("\nHalley yildizi 2000'li yillarda toplam %d kez gorulebilir.", toplamadet);
	return 0;
}
