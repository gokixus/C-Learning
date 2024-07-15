#include <stdio.h>

int main() {
	int onlukPara;
	int yuzlukPara;
	int onlukKurus;
	int yirmibeslikKurus;
	
	printf("Elinizdeki 10'luk Para miktarini giriniz: ");
	scanf("%d", &onlukPara);
	printf("Elinizdeki 100'luk Para miktarini giriniz: ");
	scanf("%d", &yuzlukPara);
	printf("Elinizdeki 10'luk Kurus miktarini giriniz: ");
	scanf("%d", &onlukKurus);
	printf("Elinizdeki 25'lik Kurus miktarini giriniz: ");
	scanf("%d", &yirmibeslikKurus);
	
	float YonlukPara = onlukPara/4;
	float YyuzlukPara = yuzlukPara*2.5;
	int YonlukKurus = onlukKurus*10;
	int YyirmibeslikKurus = yirmibeslikKurus*25;
	
	int toplam =  YonlukPara+YyuzlukPara+YonlukKurus+YyirmibeslikKurus;
	int toplam1 = toplam/100;
	float toplam2 = toplam%100;
	printf("Bozukluklarin toplam degeri %d lira %0.2f kurus eder.", toplam1, toplam2);
	return 0;
}
