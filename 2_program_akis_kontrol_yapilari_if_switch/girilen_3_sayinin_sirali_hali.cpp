#include <stdio.h>

int main() {
	int sayi1, sayi2, sayi3;
	
	printf("Lutfen sayilari giriniz: ");
	printf("\n1. sayi: ");
	scanf("%d", &sayi1);
	printf("\n2. sayi: ");
	scanf("%d", &sayi2);
    printf("\n3. sayi: ");
	scanf("%d", &sayi3);

	if(sayi1<sayi2 && sayi2<sayi3)
	    printf("\n\n\nGirilen sayilarin sirali hali: %d, %d, %d", sayi1, sayi2, sayi3);	    
	if(sayi2<sayi1 && sayi1<sayi3)
	    printf("\n\n\nGirilen sayilarin sirali hali: %d, %d, %d", sayi2, sayi1, sayi3);
	if(sayi2<sayi3 && sayi3<sayi1)
	    printf("\n\n\nGirilen sayilarin sirali hali: %d, %d, %d", sayi2, sayi3, sayi1);	    
	if(sayi3<sayi2 && sayi2<sayi1)
	    printf("\n\n\nGirilen sayilarin sirali hali: %d, %d, %d", sayi3, sayi2, sayi1);	    
	if(sayi3<sayi1 && sayi1<sayi2)
	    printf("\n\n\nGirilen sayilarin sirali hali: %d, %d, %d", sayi3, sayi1, sayi2);
	if(sayi1<sayi3 && sayi3<sayi2)
	    printf("\n\n\nGirilen sayilarin sirali hali: %d, %d, %d", sayi1, sayi3, sayi2);
	return 0;
}
