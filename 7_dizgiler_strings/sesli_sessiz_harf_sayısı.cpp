#include <stdio.h>
#include <string.h>
#include <ctype.h>


void sozcukleriSay(char *cumle, int *sesli, int *sessiz) {
	char sesliHarf[] = {'a', 'e', 'i', 'o', 'u'};
	int i, j;
	*sesli = 0, *sessiz = 0;
		
	for(i = 0 ; i < strlen(cumle) ; i++) {
		cumle[i] = tolower(cumle[i]);
		int flag = 0;
		for(j = 0 ; j < 5 ; j++) {
			if(cumle[i] == sesliHarf[j]) {
				(*sesli)++;
				flag = 1;
				break;
			}
		}
		if(isalpha(cumle[i]) && flag == 0) {
			(*sessiz)++;
		}
	}
}

int main() {
	char cumle[255];
	int sesli, sessiz;
	
	printf("Cumleyi giriniz: ");
	fgets(cumle, 255, stdin);
	
	sozcukleriSay(cumle, &sesli, &sessiz);
	printf("Girilen cumlede %d sesli, %d sessiz harf bulunmaktadir.\n", sesli, sessiz);
}
