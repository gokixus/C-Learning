#include <stdio.h>

int main () {
	int sayac;
	for(sayac=0 ; sayac<=5 ; sayac++) {
	    if(sayac == 3)
	        continue;
	    printf("sayac = %d\n", sayac);
	}
	return 0;
}
