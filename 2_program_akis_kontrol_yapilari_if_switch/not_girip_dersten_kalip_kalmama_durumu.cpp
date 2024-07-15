#include <stdio.h>

int main() {
	int vize, final, but;
	printf("Vize notunuzu giriniz: ");
	scanf("%d", &vize);
    printf("Final notunuzu giriniz: ");
	scanf("%d", &final);
    printf("But notunuzu giriniz: ");
	scanf("%d", &but);
	
	float ortalama = vize*0.4 + final*0.5 + but*0.1;
	printf("\n\nOrtalama puaniniz: %f", ortalama);
	if(ortalama >= 60)
	    printf("\nTebrikler dersi gectiniz!!!");
	else
	    printf("\nDersten kaldiniz!!!");
	    
    return 0;
}
