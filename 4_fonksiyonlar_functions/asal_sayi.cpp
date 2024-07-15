#include <stdio.h>

int asalBul(int sayi) {
	int i;
    for(i = 2 ; i < sayi ; i++) {
        if(sayi % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
	int asal;
	printf("Asal sayi olup olmadigini bulmak icin bir tamsayi giriniz : ");
	scanf("%d", &asal);
	if(asalBul(asal) == 1) {
		printf("%d sayi asaldir", asal);
	}
	else {
		printf("%d sayi asal degildir", asal);
	}
	return 0;
}
