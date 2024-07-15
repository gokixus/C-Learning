#include <stdio.h>

int main() {
	int sayi;
	int sayac;
	int test = 1;
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	if(sayi == 1)
	    test=0;
	for(sayac = sayi-1 ; sayac > 1 && test == 1 ; sayac--)
	    if(sayi%sayac == 0)
	        test = 0;
	if(test == 1)
	    printf("Sayi asaldir.");
	else
	    printf("Sayi asal degildir.");
	return 0;
}
