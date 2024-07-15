#include <stdio.h>

int main() {
	int vize, final;
	printf("Vize notunuzu giriniz: ");
	scanf("%d", &vize);
	printf("Final notunuzu giriniz: ");
	scanf("%d", &final);
	
	float notOrtalama = vize*0.4 + final*0.6;
	printf("\nAgirlikli not ortalama: %f ", notOrtalama);
	if(notOrtalama >= 60)
	    printf("\nOgrenci dersten gecti!!!");
	else
	    printf("\nOgrenci dersten kaldi!!!");
	return 0;
}
