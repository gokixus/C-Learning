#include <stdio.h>

int main() {
	int sigorta, onarim, hurda;
	printf("Hasarli aracin sigorta, onarim ve hurda bedelini giriniz:  ");
	scanf("%d%d%d", &sigorta, &onarim, &hurda);
	
	int perte;
	perte = hurda + onarim;
	int kar;
	kar = perte - sigorta;

	
	if(perte >= sigorta) {
	    printf("\nBu araci perte ayirmalisiniz\n");
	    printf("Perte ayirarak %d TL kar elde edersiniz.", kar);
	}
	else
	    printf("\nBu araci onarim icin servise gondermelisiniz.");
	    
	return 0;
}
