#include <stdio.h>

int main() {
	int n;
	printf("Dizinin n.'e kadar hesaplamak istediginiz degerini yaziniz: ");
	scanf("%d", &n);
	double sonuc = 0.00;
	for(int i=1 ; i<=n ; i++) {
	    sonuc = sonuc + (i+1)/((double)i);
    }
	printf("Toplam degeri = %0.2f", sonuc);
	return 0;
}
