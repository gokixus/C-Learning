#include <stdio.h>
#include <string.h>

int main() {
    char cumle[255];
    int kelime_sayisi = 1;
    int i;

    printf("Cumlenizi giriniz: ");
    fgets(cumle, 255, stdin);

    for (i = 0; cumle[i] != '\0'; i++) {
        if (cumle[i] == ' ') {
            kelime_sayisi++;
        }
    }
    printf("Girdiginiz cumle %d kelimeden olusmaktadir.\n", kelime_sayisi);

    return 0;
}

