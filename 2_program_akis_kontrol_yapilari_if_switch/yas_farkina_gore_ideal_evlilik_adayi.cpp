#include <math.h>
#include <stdio.h>

int main() {
	int yas;
	int aday1, aday2, aday3;
	printf("Yasinizi giriniz: ");
	scanf("%d", &yas);
	printf("Adaylarin yasini giriniz(3 adet): ");
	scanf("%d%d%d", &aday1,&aday2,&aday3);
	
	int top1 = yas-aday1;
	int top2 = yas-aday2;
	int top3 = yas-aday3;
	int x1, x2, x3;
	x1 = fabs(top1);
	x2 = fabs(top2);
	x3 = fabs(top3);
	
	if(x1>x2 && x2>x3)
	    printf("\nYasiniza en yakin 3 numarali adaydir.\n(Yas farki = %d)", x3);
	if(x1>x3 && x3>x2)
	    printf("\nYasiniza en yakin 2 numarali adaydir.\n(Yas farki = %d)", x2);
	if(x2>x3 && x3>x1)
	    printf("\nYasiniza en yakin 1 numarali adaydir.\n(Yas farki = %d)", x1);
	if(x2>x1 && x1>x3)
	    printf("\nYasiniza en yakin 3 numarali adaydir.\n(Yas farki = %d)", x3);
	if(x3>x1 && x1>x2)
	    printf("\nYasiniza en yakin 2 numarali adaydir.\n(Yas farki = %d)", x2);
	if(x3>x2 && x2>x1)
	    printf("\nYasiniza en yakin 1 numarali adaydir.\n(Yas farki = %d)", x1);
	    
	return 0;
}
