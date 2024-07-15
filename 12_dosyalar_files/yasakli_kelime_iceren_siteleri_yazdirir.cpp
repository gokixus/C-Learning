#include <stdio.h>
#include <string.h>

int main() {
	FILE *pOku = fopen("gunlukSiteler.txt", "r");
	FILE *pYaz = fopen("tembelSiteler.txt", "w");
	if(!pOku || !pYaz) {
		perror("Dosya acilamadi veya olusturulamadi.\n");
		return 1;
	}
	
	char ipAdresi[20][100];
    char siteler[20][100];
	int top = 0;
	while(fscanf(pOku, "%s %s", ipAdresi[top], siteler[top]) != EOF) {
		int bulundu = 0;
		for(int i = 0 ; i < top ; i++) {
			if(strcmp(siteler[i], siteler[top]) == 0) {
				strcpy(ipAdresi[i], ipAdresi[top]);
                strcpy(siteler[i], siteler[top]);
                bulundu = 1;
                break;
			}
		}
		if(!bulundu) {
			top++;
		}
	}
	
	char yasakKelimeler[5][10] = {"game", "oyun", "play", "kumar", "bahis"};
	for (int i = 0; i < top; i++) {
        for (int j = 0; j < 5; j++) {
            if (strstr(siteler[i], yasakKelimeler[j]) != NULL) {
                fprintf(pYaz, "%s\n", ipAdresi[i]);
                break;
            }
        }
    }
	
	fclose(pOku);
	fclose(pYaz);
	printf("Dosya olusturuldu.\n");
	return 0;
}
