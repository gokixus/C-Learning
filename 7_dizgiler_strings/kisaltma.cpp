#include <stdio.h>
#include <ctype.h>

int main() {
    char metin[100];
    char sonuc[100];
    int i, j = 0;

    printf("Lutfen bir metin giriniz: ");
    fgets(metin, sizeof(metin), stdin);

    for (i = 0; metin[i] != '\0'; i++) {
        // Kelimenin ilk harfiyse sonuca ekle
        if ((i == 0 || metin[i - 1] == ' ') && isalpha(metin[i])) {
            sonuc[j] = metin[i];
            j++;
        }
    }
    sonuc[j] = '\0';

    printf("Sonuc: %s\n", sonuc);

    return 0;
}

