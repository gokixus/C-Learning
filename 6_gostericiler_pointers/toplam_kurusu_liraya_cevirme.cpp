#include <stdio.h>

void toplamPara(int, int, int, int, int *, int *);

int main() {
	int elliKr, yirmibesKr, onKr, besKr;
	printf("50 Kurus miktarini giriniz: ");
	scanf("%d", &elliKr);
	printf("25 Kurus miktarini giriniz: ");
	scanf("%d", &yirmibesKr);
	printf("10 Kurus miktarini giriniz: ");
	scanf("%d", &onKr);
	printf("5 Kurus miktarini giriniz: ");
	scanf("%d", &besKr);
	
	int lira, kurus;
	toplamPara(elliKr, yirmibesKr, onKr, besKr, &lira, &kurus);
	printf("\nToplam para : %d lira %d kurus", lira, kurus);
	return 0;
}

void toplamPara(int elliKr_p, int yirmibesKr_p, int onKr_p, int besKr_p, int *lira_p, int *kurus_p) {
	int toplam = elliKr_p*50 + yirmibesKr_p*25 + onKr_p*10 + besKr_p*5;
	*lira_p = toplam / 100;
	*kurus_p = toplam % 100;
}
