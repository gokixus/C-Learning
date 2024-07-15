#include <stdio.h>

int main() {
	int aile;
	printf("Ailedeki birey sayisi kac? ");
	scanf("%d", &aile);
	float toplam = 0;
	int yas;
	
	for(int i = 1 ; i<=aile ; i++) {
	    printf("%d. kisinin yasini giriniz: ", i);
	    scanf("%d", &yas);
	    
	    if( yas < 1 || 100 < yas) {
	    	printf("Hatali yas girdiniz! Lutfen ");
	    	i--;
		}
		else if(yas<=10) {
			toplam += 1;
		}
		else if(yas<=17) {
			toplam += 1.5;
		}
		else if(yas<=26) {
			toplam += 4.75;
		}
		else if(yas<=50) {
			toplam += 7;
		}
		else{
			toplam += 5.25;
		}
    }
	printf("\nOdenecek toplam ucret: %0.2f", toplam);
	return 0;
}
