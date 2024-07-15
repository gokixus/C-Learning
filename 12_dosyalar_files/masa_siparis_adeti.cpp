#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_ICECEK 20
#define MAX_MASA 30

int main() {
	FILE *pOku = fopen("siparisler.txt", "r");
	if(!pOku) {
		perror("Dosya acilamadi.\n");
		return 1;
	}
	
	char icecek[25];
	printf("Icecek adi : ");
	scanf("%s", icecek);
	 for (int i = 0; icecek[i]; i++) {
        icecek[i] = toupper(icecek[i]);
    }
	
	char masa[MAX_MASA][15];
	char icecekler[MAX_MASA][15];
	char cizgiler[MAX_MASA][100];
	int topMasa = 0;
	while (fscanf(pOku, "%s %s %s", masa[topMasa], icecekler[topMasa], cizgiler[topMasa]) != EOF) {
        int bulundu = 0;
        for (int i = 0; i < topMasa; i++) {
            if (strcmp(masa[i], masa[topMasa]) == 0 && strcmp(icecekler[i], icecekler[topMasa]) == 0) {
                cizgiler[i][0] += strlen(cizgiler[topMasa]);
                bulundu = 1;
                break;
            }
        }
        if (!bulundu) {
            topMasa++;
        }
    }
    fclose(pOku);
	
	int maxCizgi = 0;
    char maxMasa[15];
    for(int i = 0; i < topMasa; i++) {
    	int currentCizgiCount = strlen(cizgiler[i]);
        if(strcmp(icecekler[i], icecek) == 0) {
            if(currentCizgiCount > maxCizgi) {
                maxCizgi = currentCizgiCount;
                strcpy(maxMasa, masa[i]);
            }
        }
    }
    
    if(maxCizgi > 0) {
        printf("En fazla %s icen: %s (%d)\n", icecek, maxMasa, maxCizgi);
    } else {
        printf("%s icecegi icen bulunamadi.\n", icecek);
    }
	
}
