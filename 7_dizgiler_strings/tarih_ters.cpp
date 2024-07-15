#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void kisaTarihKopyala(char *t, int *g, int *a, int *y) {
    char *aylar[] = {"Ocak", "Þubat", "Mart", "Nisan", "Mayýs", "Haziran", "Temmuz", "Aðustos", "Eylül", "Ekim", "Kasým", "Aralýk"};
    char *gun = strtok(t, " ");
    char *ay = strtok(NULL, " ");
    char *yil = strtok(NULL, " ");

    *g = atoi(gun);
    *y = atoi(yil);

    for(int i = 0; i < 12; i++) {
        if(strcmp(ay, aylar[i]) == 0) {
            *a = i + 1;
            break;
        }
    }
}

int main() {
    char tarih[25];
    printf("Uzun tarih dizgisini giriniz: ");
    fgets(tarih, sizeof(tarih), stdin);
    int gun, ay, yil;
    kisaTarihKopyala(tarih, &gun, &ay, &yil);
    printf("Tarihin kisa hali : %d/%02d/%d\n", gun, ay, yil);
    return 0;
}

