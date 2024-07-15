#include <stdio.h>
#include <string.h>

void tekrarlayaniSil(char *);

int main() {
	char dizgi[50];
	printf("Dizgiyi giriniz: ");
	fgets(dizgi, sizeof(dizgi), stdin);
	dizgi[strcspn(dizgi, "\n")] = '\0';
	
	tekrarlayaniSil(dizgi);
	printf("Son hali : \n%s", dizgi);
	return 0;
}

void tekrarlayaniSil(char *dizgi) {
    int i, j = 0;
    for(i = 1; dizgi[i] != '\0' ; i++) {
        if(dizgi[i] != dizgi[j]) {
            j++;
            dizgi[j] = dizgi[i];
        }
    }
    dizgi[j+1] = '\0'; // Dizgiyi sonlandýrýn
}
