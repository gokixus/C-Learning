#include <stdio.h>

int main() {
	int sayi;
	int tekb = 0;
	int ikib = 0;

	for(int i = 1 ; i<100000 ; i++){
		printf("Sayi: ");
      	scanf("%d", &sayi);
	    if(sayi<10){
	    	tekb++;
		}
		else if(10<=sayi && sayi<100) {
		    ikib++;
		}
		else if(100<=sayi) {
			break;
		}
	}
	printf("Girilen %d sayinin %d tanesi tek basamakli, %d taneside iki basamaklidir.", tekb+ikib, tekb, ikib);
	return 0;
}
