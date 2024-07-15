#include <stdio.h>

int main() {
	int i,j, asal;
	printf("1 ile 20 arasindaki asal sayilar: \n");
	printf("---------------------------------\n");
	for(i = 2 ; i<=20; i++) {
		asal = 1;
		for(j = 2 ; j < i ; j++) {
		    if(i % j == 0 ) {
			    asal = 0;
			    break;
	            }
	        }
       	if( asal == 1 ){
		    printf("%d, ", i);
	    }
    }
	return 0;
}
