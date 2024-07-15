#include <stdio.h>

int main() {
	int vize, final;
	float notOrtalama;
	char harf;
	
	printf("Ogrencinin vize notu: ");
	scanf("%d", &vize);
	printf("Ogrencinin final notu: ");
	scanf("%d", &final);
	
	notOrtalama = vize*0.4 + final*0.6;
	if(notOrtalama < 50)
	    harf = 'F';
	else if(notOrtalama < 60)
	    harf = 'D';
	else if(notOrtalama < 70)
	    harf = 'C';
	else if(notOrtalama < 80)
	    harf = 'B';
	else
	    harf = 'A';
	printf("\nBasari ortalamasi %f", notOrtalama);
	printf("\nOgrencinin harf notu %c", harf);
	return 0;
}
