#include <stdio.h>

void bulBozuklukSayisi(float, int *, int *, int *, int *, int *);

int main() {
	float para;
	printf("Para miktarini giriniz: ");
	scanf("%f", &para);	
	int lira, elliKr, yirmiBesKr, onKr, besKr;
	bulBozuklukSayisi(para, &lira, &elliKr, &yirmiBesKr, &onKr, &besKr);
	printf("\n%d adet 1 TL\n%d adet 50 Kr\n%d adet 25 Kr\n%d adet 10 Kr\n%d adet 5 Kr", lira, elliKr, yirmiBesKr, onKr, besKr);
	return 0;
}

void bulBozuklukSayisi(float para, int *lira_p,  int *elliKr_p, int *yirmiBesKr_p, int *onKr_p, int *besKr_p) {
	int kalanPara = para*100;
	*lira_p = kalanPara / 100;
	kalanPara %= 100;
	*elliKr_p = kalanPara/50;
	kalanPara %= 50;
	*yirmiBesKr_p = kalanPara/25;
	kalanPara %= 25;
	*onKr_p = kalanPara/10;
	kalanPara %= 10;
	*besKr_p = kalanPara/5;
}
