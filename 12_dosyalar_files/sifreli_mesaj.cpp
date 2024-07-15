#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *dosya1 = fopen("d.txt", "r");
    FILE *dosya2 = fopen("kodlar.txt", "r");
    if (dosya1 == NULL || dosya2 == NULL) {
        printf("Dosya acilamadi.\n");
        return 1;
    }

    FILE *dosya3 = fopen("orijinal.txt", "w");
    if (dosya3 == NULL) {
        printf("Dosya olusturulamadi.\n");
        return 1;
    }

    char cumle[1000];
    int kodlar[30];
    int kodSayisi = 0;

    // kodlar.txt dosyas�ndan kodlar� oku
    while (fscanf(dosya2, "%d", &kodlar[kodSayisi]) == 1) {
        kodSayisi++;
    }

    // d.txt dosyas�ndan her sat�r� oku
    while (fgets(cumle, sizeof(cumle), dosya1)) {
        int uzunluk = strlen(cumle);
        if(cumle[uzunluk - 1] == '\n') {
            cumle[uzunluk - 1] = '\0'; // Sat�r sonu karakterini kald�r
            uzunluk--;
        }

        // Her karakter pozisyonunu kontrol et
        for(int j = 0; j < kodSayisi; j++) {
            int kod = kodlar[j] - 1; // Diziler 0 tabanl�, kodlar 1 tabanl�
            if(kod < uzunluk) {
                fputc(cumle[kod], dosya3);
            }
        }
    }

    fclose(dosya1);
    fclose(dosya2);
    fclose(dosya3);

    printf("Dosya olusturuldu.\n");

    return 0;
}

