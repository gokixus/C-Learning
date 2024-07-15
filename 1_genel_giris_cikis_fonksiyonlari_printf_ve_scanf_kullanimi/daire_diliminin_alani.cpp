#include <stdio.h>
#include <math.h>

int main () {
	int merkez, cap;
	float pi = 3.14;

	printf("Cap giriniz(cm): ");
	scanf("%d", &cap);
	printf("Merkez aci degerini giriniz: ");
	scanf("%d", &merkez);
	
	float alan = pi*pow(cap, 2)*merkez/360;
	printf("\n\nGirilen cap %d ve merkez aci degeri %d", cap, merkez);
	printf("\nAcinin taradigi alan %f santimetrekaredir", alan);
	return 0;
}
