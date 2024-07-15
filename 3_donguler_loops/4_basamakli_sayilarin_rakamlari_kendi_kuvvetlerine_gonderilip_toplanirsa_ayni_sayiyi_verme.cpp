#include <stdio.h>
#include <math.h>

int main(){
	int abcd ;
	int a;
	int b;
	int c;
	int d;
	
	for(abcd=1000 ; abcd<=9999 ; abcd++) {
	    a = abcd/1000;
	    b = (abcd/100)%10;
	    c = (abcd/10)%10;
	    d = abcd%10;
	    
	    if(abcd == pow(a,a) + pow(b,b) + pow(c,c) + pow(d,d))  {
	    	printf("%d\n", abcd);
		}
	}
	return 0;
}
