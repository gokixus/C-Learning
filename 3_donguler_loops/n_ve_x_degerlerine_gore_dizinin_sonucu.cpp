#include <stdio.h>
#include <math.h>

int main() {
	int x, n;
	printf("Girmek istediginiz n degeri: ");
	scanf("%d", &n);
	printf("Girmek istediginiz x degeri: ");
	scanf("%d", &x);
	float toplam=0;
	for(int i = 0 ; i<=n ; i++){
		toplam += (pow(-1, i)*pow(x, i))/(float)(i+1);
	}
	printf("Sonuc = %0.2f", toplam);
	return 0;
}
