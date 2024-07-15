#include <stdio.h>

void sagdanKirp(int *, int );

int main() {
	int sayi, miktar;
	
	printf("Sayiyi giriniz: ");
	scanf("%d", &sayi);
	printf("Sagdan kirpilacak rakam sayisini giriniz: ");
	scanf("%d", &miktar);
	
	sagdanKirp(&sayi, miktar);
	
	printf("Sayinin kirpilmis yeni hali = %d ", sayi);
	return 0;
}

void sagdanKirp(int *sayip, int n){
	while(n>0) {
		*sayip = *sayip / 10;
		n--;
	}
}
