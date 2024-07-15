#include <stdio.h>

int main() {
	float uzunluk = 2.54;
	float inc;
	float sonuc1;
	float sonuc2;
	printf("Inc giriniz: ");
	scanf("%f", &inc);
	
	sonuc1 = uzunluk*inc;
	sonuc2 = uzunluk*inc*10;
	
    printf("%f inc = %f cm = %f mm", inc, sonuc1, sonuc2);
	return 0;	
}
