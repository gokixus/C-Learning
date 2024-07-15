#include <stdio.h>

int main() {
    int adet;
    while(1) {
    	printf("Kac adet sayi gireceksiniz? ");
    	scanf("%d", &adet);
    	if(adet <= 0) {
    		printf("HATA!!! Adet sifir yada negatif olamaz. \n");
		}
		else {
			break;
		}
	}
	int toplam = 0;
	int kurala_uyan = 0;
	int sayi;
	for(int i = 1 ; i<=adet ; i++) {
		printf("%d. sayiyi giriniz: ", i);
		scanf("%d", &sayi);
		
		if(sayi % 8 == 0 || sayi%13 == 0 ) {
			kurala_uyan++;
			toplam += sayi;
		}
	}
	printf("\nKurala uyan toplamda %d adet sayi girdiniz", kurala_uyan);
	printf("\nToplamlari = %d", toplam);
	return 0;
}
