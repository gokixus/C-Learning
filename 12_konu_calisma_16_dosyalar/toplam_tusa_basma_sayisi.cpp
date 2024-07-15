#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
	char dosyaAdi[20];
	printf("Kisa mesaji iceren bir dosyanin adini giriniz: ");
	scanf("%s", dosyaAdi);
	FILE *dosyaOku = fopen(dosyaAdi, "r");
	FILE *dosyaYaz = fopen("frekans2.txt", "w");
	if(!dosyaOku || !dosyaYaz) {
		perror("Dosya acilamadi yada olusturulamadi.\n");
		return 1;
	}
	
	int toplamTus = 0;
	char ch;
	while((ch = fgetc(dosyaOku)) != EOF) {
		const char *keyMap[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
		ch = tolower(ch);
		int tusaBasmaSayisi = 0;
		if(ch == ' ') {
			tusaBasmaSayisi = 1;
		} else {
			for(int i = 0 ; i < 8 ; i++) {
				const char *harfler = keyMap[i];
				for(int j = 0 ; j < strlen(harfler) ; j++) {
					if(ch == harfler[j]) {
						tusaBasmaSayisi = j + 1;
						break;
					}
				}
				if(tusaBasmaSayisi > 0) {
					break;
				}
			}
		}
		toplamTus += tusaBasmaSayisi;
		
	}
	fclose(dosyaOku);
	
	fprintf(dosyaYaz, "Toplam tuþ basma sayýsý: %d\n", toplamTus);
    fclose(dosyaYaz);

    printf("Toplam tus basma sayisi frekans1.txt dosyasina kaydedildi.\n");

    return 0;
}
