#include <stdio.h>

int main() {
	int sayi;
	int enkucuksayi=2147483647;
	int ikincisayi=2147483647;
	
	for(int i = 1 ; i<=10 ; i++) {
		printf("%d. sayi : ", i);
		scanf("%d", &sayi);
		
		if(sayi < enkucuksayi) {
			enkucuksayi = sayi;
		}
		else if(sayi < ikincisayi && sayi != enkucuksayi){
			ikincisayi = sayi;
		}
	}
	printf("-------------------------------------\n");
	printf("En kucuk sayi = %d", enkucuksayi);
	printf("\nIkinci en kucuk sayi = %d", ikincisayi);
	
	return 0;
}
