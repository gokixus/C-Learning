#include <stdio.h>

int main () {
    FILE *pOku = fopen("telefonFiyat.txt", "r");
    FILE *pYazdir1 = fopen("ucuzTelefon.txt", "w");
    FILE *pYazdir2 = fopen("pahaliTelefon.txt", "w");
    if(!pOku || !pYazdir1 || !pYazdir2) {
        perror("Dosya acilamadi veya olusturulamadi");
        return 1;
    }
    
    char telefonModel[15], telefonMarka[15];
    float fiyat, topFiyat = 0;
    int topTelefon = 0;

    while(fscanf(pOku, "%s %s %f", telefonMarka, telefonModel, &fiyat) != EOF) {
        topFiyat += fiyat;
        topTelefon++;
    }
    
    float ortalamaTelefon = topFiyat / topTelefon;
    rewind(pOku);
    
    while(fscanf(pOku, "%s %s %f", telefonMarka, telefonModel, &fiyat) != EOF) {
        if(fiyat > ortalamaTelefon) {
            fprintf(pYazdir2, "%s %s %0.2f\n", telefonMarka, telefonModel, fiyat);
        } else {
            fprintf(pYazdir1, "%s %s %0.2f\n", telefonMarka, telefonModel, fiyat);
        }
    }
    
    fclose(pOku);
    fclose(pYazdir1);
    fclose(pYazdir2);
    printf("Dosyalar olusturuldu.\n");
    return 0;
}

