#include <stdio.h>

int main() {
	int sayi;
	printf("Lutfen bir sayi giriniz(tamsayi): ");
	scanf("%d", &sayi);
	
	if(sayi > 0)
	    printf("\nGirdiginiz sayi pozitiftir.");
	else if(sayi < 0)
	    printf("\nGirdiginiz sayi negatiftir.");
	else
	    printf("\nGirdiginiz sayi sifirdir.");
	return 0;
}
