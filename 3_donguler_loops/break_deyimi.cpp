#include <stdio.h>

int main () {
	int sayac;
	for(sayac=0 ; sayac<=10 ; sayac++) {
	    if(sayac == 7)
	        break;
	    printf("sayac = %d\n", sayac);
    }
	return 0;
}
