#include <stdio.h>

int main() {
	int dogru, yanlis;
	printf("Dogru sayinizi giriniz: ");
	scanf("%d", &dogru);
	printf("Yanlis sayinizi giriniz: ");
	scanf("%d", &yanlis);
	
	int yanlis_net;
	yanlis_net = yanlis/4;
	int net;
	net = dogru - yanlis_net;
    printf("\nNetiniz: %d", net);
		
	if(net<10)
	    printf("\nKurunuz: Beginner");
	else if(10<=net && net<30)
	    printf("\nKurunuz: Elementary");
	else if(30<=net && net<50)
	    printf("\nKurunuz: Preintermediate");
	else if(50<=net && net<70)
	    printf("\nKurunuz: Intermediate");
	else
	    printf("\nKurunuz: Upper");
    
    return 0;
}
