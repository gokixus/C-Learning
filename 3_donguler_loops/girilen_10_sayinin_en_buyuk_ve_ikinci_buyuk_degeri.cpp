#include <stdio.h>

int main() {
	int sayi;
	int enbuyuksayi;
	int ikincisayi;
	
	for(int i = 1; i<=10 ; i++) {
		printf("%d. sayi = ", i);
		scanf("%d", &sayi);
		
		if(sayi > enbuyuksayi) {
			enbuyuksayi = sayi;
		}
		else if(sayi > ikincisayi && sayi != enbuyuksayi) {
			ikincisayi = sayi;
		}
	}
	printf("-------------------------------------\n");
	printf("En buyuk deger = %d", enbuyuksayi);
	printf("\nIkinci en buyuk deger = %d", ikincisayi);
	
	return 0;
}
