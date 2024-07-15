#include <stdio.h>

void tek_cift(int birSayi) {
	if(birSayi == 0)
	    printf("Verilen sayi(%d) cifttir.", birSayi);
	else
	    printf("Verilen sayi(%d) tektir.", birSayi);
}
int main() {
	int sayi;
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	tek_cift(sayi);
	return 0;
}
