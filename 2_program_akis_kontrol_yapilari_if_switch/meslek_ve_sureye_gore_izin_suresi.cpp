#include <stdio.h>

int main() {
	char meslek;
	int sure;
	printf("Calisma durumunuzu giriniz(Memur icin m veya M, digerleri icin d veya D) ve toplam calisma surenizi giriniz(ay cinsinden): ");
	scanf("%c%d", &meslek, &sure);
	
	float yil;
	yil = sure/12.00;
	
	switch(meslek) {
		case 'M':
		case 'm':
			if(sure<12)
			    printf("\nUzgunuz! Tam 1 yil dolmadigi icin yillik izin hakkiniz yok\nCalisma sureniz = %d ay = %0.2f yil eder.", sure, yil);
			if(12<=sure && sure<120)
			    printf("\nYillik izin hakkiniz 20 gundur\nCalisma sureniz = %d ay = %0.2f yil eder.", sure, yil);
			if(120<=sure)
			    printf("\nYillik izin hakkiniz 30 gundur\nCalisma sureniz = %d ay = %0.2f yil eder.", sure, yil);
			break;
		case 'D':
		case 'd':
			if(sure<12)
			    printf("\nUzgunuz! Tam 1 yil dolmadigi icin yillik izin hakkiniz yok\nCalisma sureniz = %d ay = %0.2f yil eder.", sure, yil);
			if(12<=sure && sure<72)
			    printf("\nYillik izin hakkiniz 14 gundur\nCalisma sureniz = %d ay = %0.2f yil eder.", sure, yil);
			if(72<=sure && sure<180)
			    printf("\nYillik izin hakkiniz 20 gundur\nCalisma sureniz = %d ay = %0.2f yil eder.", sure, yil);
			if(180<=sure)
			    printf("\nYillik izin hakkiniz 26 gundur\nCalisma sureniz = %d ay = %0.2f yil eder.", sure, yil);
			break;
		default:
			printf("\nLutfen dogru harf(Memur icin M veya m, digerleri icin D veya d) giriniz");
	}
	return 0;
}
