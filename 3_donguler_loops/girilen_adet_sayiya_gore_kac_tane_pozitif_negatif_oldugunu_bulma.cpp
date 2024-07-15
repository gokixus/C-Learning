#include <stdio.h>

int main() {
	int sayi;
	printf("Kac adet sayi gireceksiniz: ");
	scanf("%d", &sayi);
	int negatifs = 0;
	int pozitifs = 0;
	printf("\nSayilari giriniz negatif veya pozitif(%d tane): \n", sayi);
	for(int i = 1 ; i<=sayi ; i++){
		int sayi_input;
	    scanf("%d", &sayi_input);
	    if(sayi_input<0) {
	    	negatifs++;
		}
		if(0<=sayi_input){
			pozitifs++;
		}
    }
    printf("\nGirilen %d sayinin %d tanesi negatif %d tanesi de pozitiftir", sayi, negatifs, pozitifs);
	return 0;
}
