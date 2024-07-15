#include <stdio.h>
#include <string.h>

void hesaplama(char*,char*,int*);

int main() {
	char morseKodu[100];
	char sayisalKarsilik[100];
	int basamakSayisi;
	
	printf("Morse kodunu giriniz: ");
	fgets(morseKodu, sizeof(morseKodu), stdin);
	morseKodu[strcspn(morseKodu, "\n")] = '\0';
	
	hesaplama(morseKodu, sayisalKarsilik, &basamakSayisi);
	printf("\nSayisal karsiligi : %s\n", sayisalKarsilik);
	printf("Basamak sayisi : %d\n", basamakSayisi);
	return 0;
}

void hesaplama(char *m, char *s, int *b) {
	char *morsSayilar[] = {"-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."};
	int sayac = 0;
	char *str = strtok(m, " ");
	while(str != NULL) {
		for(int i = 0 ; i < 10 ; i++) {
			if(strcmp(str, morsSayilar[i]) == 0) {
				s[sayac++] = '0' + i;
				break;
			}
		}
		str = strtok(NULL, " ");
	}
	s[sayac] = '\0';
	*b = sayac;
}



