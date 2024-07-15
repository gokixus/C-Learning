#include <stdio.h>
#include <string.h>
#include <ctype.h>

void hesapla(char*);

int main() {
	char ingilizce[255];
	printf("Ingilizce cumle giriniz:\n");
	fgets(ingilizce, sizeof(ingilizce), stdin);
	ingilizce[strcspn(ingilizce, "\n")] = '\0';
	hesapla(ingilizce);
	return 0;
}

void hesapla(char *ing) {
	int i;
	int harfSayisi[26] = {0};
	int topHarf = 0;
	
	for(i = 0 ; ing[i] != '\0' ; i++) {
		if(isalpha(ing[i])) {
			int index = tolower(ing[i]) - 'a';
			if(harfSayisi[index] == 0) {
				topHarf++;
			}
			harfSayisi[index]++;
		}
	}
	
	if(topHarf == 26) {
        printf("\nGirilen cumle bir pangramdir.\n");
    } else {
        printf("\nGirilen cumle bir pangram degildir.\n");
    }
	printf("Cumledeki farkli harf sayisi: %d\n", topHarf);
}
