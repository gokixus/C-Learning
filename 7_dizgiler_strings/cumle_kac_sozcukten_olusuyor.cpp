#include <stdio.h>
#include <ctype.h>

int sozcukleriSay(char *cumle) {
	int sayac = 0;
	int kelime = 0;
	for(int i = 0 ; cumle[i] != '\0' ; i++) {
		if(isalnum(cumle[i]) && kelime == 0) {
			kelime = 1;
			sayac++;
		}
		else if(isspace(cumle[i]) || cumle[i+1] == ' ') {
			kelime = 0;
		}
	}
	return sayac;
}

int main() {
	char cumle[1000];
	printf("Cumleyi giriniz: ");
	fgets(cumle, 1000, stdin);
	printf("\nGirilen cumle %d kelimeden olusmaktadir.", sozcukleriSay(cumle));
}
