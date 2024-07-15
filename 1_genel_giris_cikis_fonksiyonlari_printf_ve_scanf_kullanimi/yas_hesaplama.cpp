#include <stdio.h>

int main () {
	int dogum;
	int gunumuz;
	
	printf("Dogum yilinizi giriniz: ");
	scanf("%d", &dogum);
	
	printf("Gunumuzun yilini giriniz: ");
	scanf("%d", &gunumuz);
	
	int yas = gunumuz-dogum;
	printf("\nHesaplanan yasiniz %d dir.", yas);
	return 0;
}
