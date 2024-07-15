#include <stdio.h>

int main() {
	float km;
	float mil = 1.609;
	printf("Mil olarak uzakligi giriniz: ");
	scanf("%f", &km);
	
	float sonuc = km*mil;
	printf("\nGirilen %f mil, %f km dir.", km, sonuc);
	
	return 0;
}
