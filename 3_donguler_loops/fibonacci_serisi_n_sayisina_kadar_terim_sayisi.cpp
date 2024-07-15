#include <stdio.h>

int main() {
	int n;
	int sayi1=0;
	int sayi2=1;
	int sonraki;
	
	printf("Bir pozitif sayi giriniz: ");
	scanf("%d", &n);
	printf("Fibonacci dizisi: ");
	
	for(int i = 1; i<=n ; ++i) {
		printf("%d, ", sayi1);
		sonraki = sayi1 + sayi2;
		sayi1 = sayi2;
		sayi2 = sonraki;
	}
	return 0;
}
