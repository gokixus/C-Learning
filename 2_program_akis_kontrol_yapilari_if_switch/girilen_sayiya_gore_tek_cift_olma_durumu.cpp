#include <stdio.h>

int main() {
	int sayi, kalan;
	printf("Lutfen bir sayi giriniz(tamsayi): ");
	scanf("%d", &sayi);
	
	kalan = sayi%2;
	if(kalan == 0)
	    printf("Girilen sayi cifftir.");
	else
	    printf("Girilen sayi tektir.");
	return 0;
}
