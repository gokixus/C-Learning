#include <stdio.h>
#include <string.h>

int main() {
    const char *sifreliDosya = "xxxxxx.sfr";
    FILE *file1 = fopen(sifreliDosya, "r");
    if (file1 == NULL) {
        perror("Error opening the input file");
        return 1;
    }

    char yeniDosyaAdi[256];
    strncpy(yeniDosyaAdi, sifreliDosya, strlen(sifreliDosya) - 4);
    yeniDosyaAdi[strlen(sifreliDosya) - 4] = '\0'; 
    strcat(yeniDosyaAdi, ".orj");
    
    FILE *file2 = fopen(yeniDosyaAdi, "w");
    if (file2 == NULL) {
        perror("Error opening the output file");
        fclose(file1);
        return 1;
    }
    
    char cumle[1000];
    while(fgets(cumle, sizeof(cumle), file1)) {
        int uzunluk = strlen(cumle);
        if(cumle[uzunluk - 1] == '\n') {
            cumle[uzunluk - 1] = '\0'; // Satýr sonu karakterini kaldýr
            uzunluk--;
        }
        
    	for(int i = 0 ; i < uzunluk ; i++) {
    		char karakter = cumle[i];
    		if(karakter >= '0' && karakter <= '9') {
    			karakter = (karakter - '0' - 3 + 10) % 10 + '0';
			} else if (karakter >= 'a' && karakter <= 'z') {
                karakter = (karakter - 'a' - 3 + 26) % 26 + 'a';
            } else if (karakter >= 'A' && karakter <= 'Z') {
                karakter = (karakter - 'A' - 3 + 26) % 26 + 'A';
            }
            cumle[i] = karakter;
		}
		fputs(cumle, file2);
	}
	fclose(file1);
	fclose(file2);
	return 0;
}

