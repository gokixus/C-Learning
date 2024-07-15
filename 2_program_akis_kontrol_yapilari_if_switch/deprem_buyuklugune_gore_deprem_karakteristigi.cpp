#include <stdio.h>

int main() {
	float sayi;
	printf("Righter cinsinden deprem buyuklugunu giriniz(0-10): ");
	scanf("%f", &sayi);
	
	if(sayi < 5.0) {
	    printf("\nUfak veya hasarsiz.");
    }
	else if(5.0 <= sayi && sayi < 5.5) {
	    printf("\nAz hasarli.");
    }
	else if(5.5 <= sayi && sayi < 6.5) {
	    printf("\nCiddi hasar! Catlamalar ve cokmeler olabilir.");
	}
	else if(6.5 <= sayi && sayi < 7.5) {
	    printf("\nFelaket! Evler ve binalar cokebilir.");
	}
	else if(7.5 <= sayi) {
	    printf("\nFacia!!! Butun yapilar yok olur.");
    }
	    
	return 0;
	
}
