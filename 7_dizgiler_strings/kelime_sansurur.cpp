#include <stdio.h>
#include <string.h>

void sansurle(char *, char *);

int main () {
	char cumle[255], strCumle[255];
	printf("Kufurlu cumle giriniz: ");
	fgets(cumle, sizeof(cumle), stdin);
	cumle[strcspn(cumle, "\n")] = '\0';
	
	sansurle(cumle, strCumle);
	printf("Sansurlenmis hali: %s", strCumle);
	return 0;
}

void sansurle(char *cumle, char *yeniCumle) {
	char *yasakKelimeler[] = {"amk", "yavsak", "orospu", "pezevenk", "aptal", "inek", "lan"};
    int kelimeSayisi = sizeof(yasakKelimeler) / sizeof(yasakKelimeler[0]);

    strcpy(yeniCumle, cumle);

    for(int i = 0; i < kelimeSayisi; i++) {
        char *str = strstr(yeniCumle, yasakKelimeler[i]);
        while(str) {
            for(int j = 0; j < strlen(yasakKelimeler[i]); j++) {
                str[j] = '*';
            }
            str = strstr(yeniCumle, yasakKelimeler[i]);
        }
    }
}
