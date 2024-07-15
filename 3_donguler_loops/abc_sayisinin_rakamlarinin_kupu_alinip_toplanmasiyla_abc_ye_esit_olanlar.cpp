#include <stdio.h>
#include <math.h>

int main() {
	int abc;
	int a, b, c;
	int toplam;
	int adet = 0;
	
	printf("Aranilan sayilar : ");
	for(abc = 100 ; abc <= 999 ; abc++) {
		a = abc/100;
		b = (abc/10)%10;
		c = abc%10;
		
		toplam = pow(a, 3) + pow(b, 3) + pow(c, 3);
		
		if(abc == toplam){
			printf("%d, ", abc);
			adet++;
		}
	}
	printf("\nBu ozellige sahip %d adet uc basamakli sayi vardir", adet);
	return 0; 
}
