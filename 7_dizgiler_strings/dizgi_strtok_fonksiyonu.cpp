#include <stdio.h>
#include <string.h>

int main() {
	char tel[50];
	char *ptr;
	
	printf("Bir telefon numarasi giriniz: ");
	scanf("%s", tel);
	
	printf("\nAyrilmis hali: \n");
	ptr = strtok(tel, "-");
	printf("Ulke kodu : %s \n", ptr);
	
	ptr = strtok(NULL, "-");
	printf("Alan kodu : %s \n", ptr);
	
	ptr = strtok(NULL, "-");
	printf("Telefon Numarasi : %s \n", ptr);
	return 0;
}
