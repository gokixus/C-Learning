#include <stdio.h>

int main() {
	int sayi1;
	int sayi2;
	printf("Birinci sayiyi giriniz: ");
	scanf("%d", &sayi1);
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d", &sayi2);
	printf("----------------------------------\n");
	int toplamadet = 0;
	
	if(sayi1%28 != 0) {
		 sayi1+=(28-(sayi1%28));
	}
	
	for( int i = sayi1 ; i<=sayi2 ; i+=28) {
		printf("%d, ", i);
		toplamadet++;
	 }
	
	printf("\nToplam %d adet", toplamadet);
	return 0;

} 
