#include <stdio.h>
#include <string.h>

void makeShortSMS(char *cumle) {
	int j = 0, k = 0;
	for (int i = 0; cumle[i] != '\0'; ++i) {
        if (cumle[i] != 'a' && cumle[i] != 'e' && cumle[i] != 'i' && cumle[i] != 'o' && cumle[i] != 'u' &&
            cumle[i] != 'A' && cumle[i] != 'E' && cumle[i] != 'I' && cumle[i] != 'O' && cumle[i] != 'U') {
        	cumle[j++] = cumle[i];
        }
        else if(k == 0 ) {
        	cumle[j++] = cumle[i];
		}
		if (cumle[i] == ' ' || cumle[i] == '\n') { // yeni bir kelimeye geçtiysek
        	k = 0; // ilk harf kontrolünü sýfýrla
        }
        else {
        	k++; // ilk harf kontrolünü arttýr
        }
    }
    cumle[j] = '\0';
}


int main() {
	char cumle[255];
	printf("Cumle giriniz: ");
	fgets(cumle, sizeof(cumle), stdin);
	makeShortSMS(cumle);
	printf("Kisatilmis SMS : %s", cumle);
}
