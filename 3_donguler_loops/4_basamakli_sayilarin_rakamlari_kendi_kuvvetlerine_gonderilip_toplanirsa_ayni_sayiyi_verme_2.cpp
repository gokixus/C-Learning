#include <stdio.h>
#include <math.h>

int main() {
	int abcd;
	int a, b, c, d;
	int yeni_abcd;
    printf("SAYI = XXXX\n\n");
    
	for(abcd = 1000 ; abcd<=9999 ; abcd++) {
		a = abcd/1000;
	    b = (abcd/100)%10;
	    c = (abcd/10)%10;
	    d = abcd%10;
	    
	    yeni_abcd = a + b + c + d;
	    
	    if(abcd == pow(yeni_abcd, 3)){
	    	printf("%d\n", abcd);
		}
	}
	return 0;
}
