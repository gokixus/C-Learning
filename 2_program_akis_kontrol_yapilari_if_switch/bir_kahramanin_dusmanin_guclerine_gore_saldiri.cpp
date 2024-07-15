#include <stdio.h>
#include <math.h>

int main(){
	float kahraman;
	float dusman1, dusman2, dusman3;
	printf("Kahramanin gucunu giriniz: ");
	scanf("%f", &kahraman);
	printf("Dusmanlarin gucunu giriniz(3 adet): ");
	scanf("%f%f%f", &dusman1, &dusman2, &dusman3);
	
	float son1, son2, son3;
	son1 = kahraman-dusman1;
	son2 = kahraman-dusman2;
	son3 = kahraman-dusman3;
	float x1, x2, x3;
	x1 = fabs(son1);
	x2 = fabs(son2);
	x3 = fabs(son3);
	
	if(x1>x2 && x2>x3)
	    printf("\nKahraman 3 nolu numaraya saldirmalidir.(Guc farki = %0.2f)", x3);
	if(x1>x3 && x3>x2)
	    printf("\nKahraman 2 nolu numaraya saldirmalidir.(Guc farki = %0.2f)", x2);
	if(x2>x3 && x3>x1)
	    printf("\nKahraman 1 nolu numaraya saldirmalidir.(Guc farki = %0.2f)", x1);
	if(x2>x1 && x1>x3)
	    printf("\nKahraman 3 nolu numaraya saldirmalidir.(Guc farki = %0.2f)", x3);
	if(x3>x1 && x1>x2)
	    printf("\nKahraman 2 nolu numaraya saldirmalidir.(Guc farki = %0.2f)", x2);
	if(x3>x2 && x2>x1)
	    printf("\nKahraman 1 nolu numaraya saldirmalidir.(Guc farki = %0.2f)", x1);
	    
	return 0;
}
