#include <stdio.h>

int main() {
	int x;
	int sayi1=0;
	int sayi2=1;
	int sonraki=0;
	
	printf("Pozitif bir sayi girin: ");
	scanf("%d", &x);
	
	printf("Fibonacci dizisi: %d, %d, ", sayi1, sayi2);
	sonraki= sayi1+sayi2;
	
	while(sonraki <= x) {
		printf("%d, ", sonraki);
		sayi1=sayi2;
		sayi2=sonraki;
		sonraki=sayi1+sayi2;
	}
	return 0;
}
