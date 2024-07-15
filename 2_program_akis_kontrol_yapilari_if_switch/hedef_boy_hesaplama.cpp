#include <stdio.h>

int main() {
	char cinsiyet;
	printf("Cinsiyet Turleri:");
	printf("\nKadin icin K veya k");
	printf("\nErkek icin E veya e\n\n");
	scanf("%c", &cinsiyet);
	
	int anne_boy, baba_boy;
	float hedef_boy;
	
	switch(cinsiyet) {
		case 'K':
		case 'k':
			printf("\nAnne boyunu giriniz(cm): ");
           	scanf("%d", &anne_boy);
	        printf("\nBaba boyunu giriniz(cm): ");
	        scanf("%d", &baba_boy);
	        
			hedef_boy = (baba_boy + anne_boy - 13)/2;
			printf("\n\nKiz cocugu icin hedef boyu: %0.2f", hedef_boy);
			if(hedef_boy <=163)
			    printf("\nTurkiye ortalamasindan daha kisa olacak");
			else
			    printf("\nTurkiye ortalamasindan daha uzun olacak");
			break;
		case 'E':
		case 'e':
			printf("\nAnne boyunu giriniz(cm): ");
	        scanf("%d", &anne_boy);
	        printf("\nBaba boyunu giriniz(cm): ");
	        scanf("%d", &baba_boy);
			hedef_boy = (baba_boy + anne_boy + 13)/2;
			printf("\n\nErkek cocugu icin hedef boyu: %0.2f", hedef_boy);
			if(hedef_boy <=175)
			    printf("\nTurkiye ortalamasindan daha kisa olacak");
			else
			    printf("\nTurkiye ortalamasindan daha uzun olacak");
			break;
		default:
			printf("\n\nYanlis harf girdiniz!!!");
	}
	return 0;
}
