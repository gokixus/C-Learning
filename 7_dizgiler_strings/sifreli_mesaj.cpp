#include <stdio.h>
#include <string.h>

int main() {
	char metin[1000];
	int otelemeMiktari, i;
	
	printf("Metni giriniz: ");
	fgets(metin, sizeof(metin), stdin);
	
	printf("Oteleme miktari giriniz: ");
	scanf("%d", &otelemeMiktari);
	
	for(i = 0 ; metin[i] != '\0' ; i++) {
		char harf = metin[i];
		if(harf >= 'a' && harf <= 'z') {
            harf = harf + otelemeMiktari;
            if(harf > 'z') {
                harf = harf - 'z' + 'a' - 1;
            }
            metin[i] = harf;
        }
        else if(harf >= 'A' && harf <= 'Z') {
            harf = harf + otelemeMiktari;
            if(harf > 'Z') {
                harf = harf - 'Z' + 'A' - 1;
            }
            metin[i] = harf;
        }
	}
	printf("\nSifreli mesaj:\n%s", metin);
	return 0;
	
}
