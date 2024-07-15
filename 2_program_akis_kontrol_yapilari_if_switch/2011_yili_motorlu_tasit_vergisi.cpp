#include <stdio.h>

int main() {
	char tasit;
	int yas;
	printf("Arac turunu giriniz(M,m: Minibus ve P,p: Panelvan): ");
	scanf("%c", &tasit);
	printf("Aracin yasini giriniz: ");
	scanf("%d", &yas);
	
    float tutar;
	int hacim;
	float bedel;
	
	switch(tasit) {
		case 'M':
		case 'm':
			if(yas<=6) {
			    tutar = 523;
			    bedel = tutar/2;
			    printf("\n2011 yili MTV tutari = %0.2f TL", tutar);
			    printf("\nTaksit bedeli = %0.2f", bedel);
		    }
			if(7<=yas && yas<=15) {
			    tutar = 346;
			    bedel = tutar/2;
			    printf("\n2011 yili MTV tutari = %0.2f TL", tutar);
			    printf("\nTaksit bedeli = %0.2f", bedel);
			}
			if(16<=yas) {
			    tutar = 172;
			    bedel = tutar/2;
			    printf("\n2011 yili MTV tutari = %0.2f TL", tutar);
			    printf("\nTaksit bedeli = %0.2f", bedel);
		    }
		    break;
		case 'P':
		case 'p':
			printf("Aracin silindir hacmini giriniz: ");
			scanf("%d", &hacim);
			if(yas<=6) {
			    if(hacim<=1900) {
			        tutar = 697;
			        bedel = tutar/2;
			        printf("\n2011 yili MTV tutari = %0.2f TL", tutar);
			        printf("\nTaksit bedeli = %0.2f", bedel);
			    }
			    if(1901<=hacim) {
			        tutar = 1052;
			        bedel = tutar/2;
			        printf("\n2011 yili MTV tutari = %0.2f TL", tutar);
			        printf("\nTaksit bedeli = %0.2f", bedel);
			    }
			}
			if(7<=yas && yas<=15) {
			    if(hacim<=1900) {
			        tutar = 436;
			        bedel = tutar/2;
			        printf("\n2011 yili MTV tutari = %0.2f TL", tutar);
			        printf("\nTaksit bedeli = %0.2f", bedel);
			    }
			    if(1901<=hacim) {
			        tutar = 697;
			        bedel = tutar/2;
			        printf("\n2011 yili MTV tutari = %0.2f TL", tutar);
			        printf("\nTaksit bedeli = %0.2f", bedel);
			    }
			}
			if(16<=yas) {
			    if(hacim<=1900) {
			        tutar = 260;
			        bedel = tutar/2;
			        printf("\n2011 yili MTV tutari = %0.2f TL", tutar);
			        printf("\nTaksit bedeli = %0.2f", bedel);
			    }
			    if(1901<=hacim){
			        tutar = 436;
			        bedel = tutar/2;
			        printf("\n2011 yili MTV tutari = %0.2f TL", tutar);
			        printf("\nTaksit bedeli = %0.2f", bedel);
			    }
			}
			break;
		default:
			printf("\nLutfen dogru harf(M,m: Minibus ve P,p: Panelvan) giriniz.");
	}
	return 0;
}
