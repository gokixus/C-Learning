#include <stdio.h>
#include <string.h>

#define MAX_BOLUM 5
#define MAX_OGRENCI 100

struct aday {
	char ad[25];
	char soyad[25];
	char muhendislik[MAX_BOLUM][25];
}ogrenci[MAX_OGRENCI];

int main() {
	FILE *pOku = fopen("tanitim.txt", "r");
	FILE *pYaz = fopen("tanitimBilgi.txt", "w");
	if(!pOku || !pYaz) {
		perror("Dosya acilamadi veya olusturulamadi.\n");
		return 1;
	}
	
	int topOgr = 0;
	while(fscanf(pOku ,"%s %s %s %s %s %s %s", ogrenci[topOgr].ad, ogrenci[topOgr].soyad, ogrenci[topOgr].muhendislik[0], 
									ogrenci[topOgr].muhendislik[1], ogrenci[topOgr].muhendislik[2],
									ogrenci[topOgr].muhendislik[3], ogrenci[topOgr].muhendislik[4]) != EOF) {
		topOgr++;
		if(topOgr >= MAX_OGRENCI) {
			break;
		}
	}
	fclose(pOku);
	
	int frequency[256] = {0};
	for(int i = 0 ; i < topOgr ; i++) {
		for (int j = 0; j < MAX_BOLUM; j++) {
            if (strlen(ogrenci[i].muhendislik[j]) > 0) {
                frequency[(unsigned char)ogrenci[i].muhendislik[j][0]]++;
            }
        }
	}
	
	char mostFreqBolum[25];
    int maxFrequency = 0;
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            // Assuming the department names are stored as strings
            for (int k = 0; k < topOgr; k++) {
                for (int j = 0; j < MAX_BOLUM; j++) {
                    if (ogrenci[k].muhendislik[j][0] == i) {
                        strcpy(mostFreqBolum, ogrenci[k].muhendislik[j]);
                        break;
                    }
                }
            }
        }
    }
	
	fprintf(pYaz, "En fazla bilgi alinan bolum: %s\n", mostFreqBolum);
    fprintf(pYaz, "%d kisiye tanitilmistir", maxFrequency);
    fclose(pYaz);
    printf("Dosya olustruldu.\n");
    return 0;
}
