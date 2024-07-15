#include <stdio.h>

int main() {
	float p1,p2,p3,p4,p5,p6,p7,p8,p9;
	printf("Birinci jurinin yarismaci puanlari(0-5): ");
	scanf("%f %f %f", &p1,&p2,&p3);
	printf("Ikinci jurinin yarismaci puanlari(0-5): ");
	scanf("%f %f %f", &p4,&p5,&p6);
	printf("Ucuncu jurinin yarismaci puanlari(0-5): ");
	scanf("%f %f %f", &p7,&p8,&p9);
	
	float birinciYarismaci = p1+p4+p7;
	float ikinciYarismaci = p2+p5+p8;
	float ucuncuYarismaci = p3+p6+p9;
	
	if(birinciYarismaci > ikinciYarismaci && ikinciYarismaci > ucuncuYarismaci) {
		printf("\n\nYarismacilarin ortalama puanlari: %0.1f %0.1f %0.1f", birinciYarismaci, ikinciYarismaci, ucuncuYarismaci);
		printf("\nEn iyi 1. yarismacidir(%0.1f).", birinciYarismaci);
	}
	if(birinciYarismaci > ucuncuYarismaci && ikinciYarismaci < ucuncuYarismaci) {
		printf("\n\nYarismacilarin ortalama puanlari: %0.1f %0.1f %0.1f", birinciYarismaci, ikinciYarismaci, ucuncuYarismaci);
		printf("\nEn iyi 1. yarismacidir(%0.1f).", birinciYarismaci);
	}
	if(birinciYarismaci < ikinciYarismaci && birinciYarismaci > ucuncuYarismaci) {
		printf("\n\nYarismacilarin ortalama puanlari: %0.1f %0.1f %0.1f", birinciYarismaci, ikinciYarismaci, ucuncuYarismaci);
		printf("\nEn iyi 2. yarismacidir(%0.1f).", ikinciYarismaci);
	}
	if(ucuncuYarismaci < ikinciYarismaci && birinciYarismaci < ucuncuYarismaci) {
		printf("\n\nYarismacilarin ortalama puanlari: %0.1f %0.1f %0.1f", birinciYarismaci, ikinciYarismaci, ucuncuYarismaci);
		printf("\nEn iyi 2. yarismacidir(%0.1f).", ikinciYarismaci);
	}
	if(birinciYarismaci < ikinciYarismaci && ikinciYarismaci < ucuncuYarismaci) {
		printf("\n\nYarismacilarin ortalama puanlari: %0.1f %0.1f 0.1f", birinciYarismaci, ikinciYarismaci, ucuncuYarismaci);
		printf("\nEn iyi 3. yarismacidir(%0.1f).", ucuncuYarismaci);
	}
	if(birinciYarismaci > ikinciYarismaci && birinciYarismaci < ucuncuYarismaci) {
		printf("\n\nYarismacilarin ortalama puanlari: %0.1f %0.1f %0.1f", birinciYarismaci, ikinciYarismaci, ucuncuYarismaci);
		printf("\nEn iyi 3. yarismacidir(%0.1f).", ucuncuYarismaci);
	}
	return 0;
}
