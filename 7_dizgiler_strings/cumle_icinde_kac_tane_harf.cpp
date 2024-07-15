#include <stdio.h>
#include <string.h>

int main() {
	char cumle[255];
	char sayac = 0;
	int i;
	
	printf("Cumlenizi giriniz: ");
	fgets(cumle, 255, stdin);
	for(i = 0; cumle[i] != '\0'; i++) {
        if(cumle[i] == 'a' || cumle[i] == 'A') { // 'a' veya 'A' ile karþýlaþtýr
            sayac++;
        }
    }
	printf("Girdiginiz cumle icerisinde %d adet a ya da A vardir.", sayac);
	return 0;
}
