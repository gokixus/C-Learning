#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void uzunTarihKopyala(char *);

int main() {
    char tarih[10];
    printf("Kisa tarih dizgisini giriniz(gg/aa/YYYY) : ");
    scanf("%s", tarih);
    
    uzunTarihKopyala(tarih);
    
    printf("Tarihin uzun hali : %s\n", tarih);
    
    return 0;
}

void uzunTarihKopyala(char *tarih) {
    char gun[3], ay[3], yil[4];
    sscanf(tarih, "%2s/%2s/%4s", gun, ay, yil);
    
    char aylar[12][10] = {"Ocak", "Subat", "Mart", "Nisan", "Mayis", "Haziran",
                          "Temmuz", "Agustos", "Eylul", "Ekim", "Kasim", "Aralik"};
    

    sprintf(tarih, "%s %s %s", gun, aylar[atoi(ay) - 1], yil);
}

