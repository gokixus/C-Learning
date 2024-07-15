#include <stdio.h>
#include <string.h>

int main() {
	char cumle[255];
	printf("Cumle giriniz:\n");
	fgets(cumle, sizeof(cumle), stdin);
	
	int toplamKelime = 0;
	char *str = strtok(cumle, " ");
	while(str != NULL) {
		toplamKelime++;
		str = strtok(NULL, " ");
	}
	printf("Girilen cumlede toplam %d kelime vardir.", toplamKelime);
	return 0;
}
