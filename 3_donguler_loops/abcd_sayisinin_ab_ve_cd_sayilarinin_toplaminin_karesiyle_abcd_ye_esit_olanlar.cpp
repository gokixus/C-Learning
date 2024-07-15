#include <stdio.h>
#include <math.h>

int main() {
	int abcd;
	int ab;
	int cd;
	int toplam;
	
	for(abcd = 1000 ; abcd <= 9999 ; abcd++) {
		ab = abcd/100;
		cd = abcd%100;
		
		toplam = ab + cd;
		
		if(abcd == pow(toplam, 2)){
			printf("%d\n", abcd);
		}
	}
	return 0;
}
