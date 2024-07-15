#include <stdio.h>

int main() {
	int sayi;
	int enBuyuk, enKucuk;
	

	enBuyuk=sayi;
	enKucuk=sayi;
	
	while(sayi>=0){
	    if(sayi>enBuyuk)
	        enBuyuk=sayi;
	    if(sayi<enKucuk);
	        enKucuk=sayi;
	   	printf("Bir sayi giriniz(durdurmak icin -1): ");
	    scanf("%d", &sayi);
	}
	printf("\nGirilenlerin en buyugu = %d", enBuyuk);
	printf("\nGirilenlerin en kucugu = %d", enKucuk);
	return 0;
}
