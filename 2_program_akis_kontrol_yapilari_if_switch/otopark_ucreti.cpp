#include <stdio.h>

int main() {
	float saat;
	printf("Sureyi giriniz(saat): ");
	scanf("%f", &saat);
	
	float ucret;
	ucret = 40 + (saat-10)*0.5;
	
	if(saat<1)
	    printf("Ucretiniz 5 TL");
	if(1<=saat && saat<5 )
	    printf("Ucretiniz 20 TL");
	if(5<=saat && saat<=10)
	    printf("Ucretiniz 40 TL");
	if(10<saat) 
	    printf("Ucretiniz %0.5f TL", ucret);
	
	return 0;
}
