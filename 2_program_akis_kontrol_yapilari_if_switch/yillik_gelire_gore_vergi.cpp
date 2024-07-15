#include <stdio.h>

int main() {
	float aylik_gelir;
	printf("Brut aylik gelirinizi giriniz: ");
	scanf("%f", &aylik_gelir);
	
	float yillik_gelir;
	yillik_gelir = aylik_gelir*12;
	
	
	if(yillik_gelir<=10700) {
	    float aylik_vergi;
	    float yillik_vergi;
	    yillik_vergi = yillik_gelir*15/100;
	    aylik_vergi = yillik_vergi/12;
	    float net_aylik_gelir = aylik_gelir - aylik_vergi;
	    printf("\nToplam yillik geliriniz: %0.2f", yillik_gelir);
	    printf("\nOdemeniz gereken toplam vergi: %0.2f", yillik_vergi);
	    printf("\nHer ay gelirinizden kesilecek vergi: %0.2f", aylik_vergi);
	    printf("\nVergisi kesilmis net aylik geliriniz: %0.2f", net_aylik_gelir);
    }
	if(10700<yillik_gelir && yillik_gelir<=26000) {
		float aylik_vergi;
	    float yillik_vergi;
	    yillik_vergi = 1605 + (yillik_gelir - 10700)*20/100;
	    aylik_vergi = yillik_vergi/12;
	    float net_aylik_gelir = aylik_gelir - aylik_vergi;
	    printf("\nToplam yillik geliriniz: %0.2f", yillik_gelir);
	    printf("\nOdemeniz gereken toplam vergi: %0.2f", yillik_vergi);
	    printf("\nHer ay gelirinizden kesilecek vergi: %0.2f", aylik_vergi);
	    printf("\nVergisi kesilmis net aylik geliriniz: %0.2f", net_aylik_gelir);
    }
	if(26000<yillik_gelir && yillik_gelir<=94000) {
		float aylik_vergi;
	    float yillik_vergi;
	    yillik_vergi = 4665 + (yillik_gelir - 26000)*27/100;
	    aylik_vergi = yillik_vergi/12;
	    float net_aylik_gelir = aylik_gelir - aylik_vergi;
	    printf("\nToplam yillik geliriniz: %0.2f", yillik_gelir);
	    printf("\nOdemeniz gereken toplam vergi: %0.2f", yillik_vergi);
	    printf("\nHer ay gelirinizden kesilecek vergi: %0.2f", aylik_vergi);
	    printf("\nVergisi kesilmis net aylik geliriniz: %0.2f", net_aylik_gelir);
    }
	if(94000<yillik_gelir) {
		float aylik_vergi;
	    float yillik_vergi;
	    yillik_vergi = yillik_gelir*37/100;
	    aylik_vergi = yillik_vergi/12;
	    float net_aylik_gelir = aylik_gelir - aylik_vergi;
	    printf("\nToplam yillik geliriniz: %0.2f", yillik_gelir);
	    printf("\nOdemeniz gereken toplam vergi: %0.2f", yillik_vergi);
	    printf("\nHer ay gelirinizden kesilecek vergi: %0.2f", aylik_vergi);
	    printf("\nVergisi kesilmis net aylik geliriniz: %0.2f", net_aylik_gelir);
	}
	return 0;
}
