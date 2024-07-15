#include <stdio.h>

int main() {
    FILE *fOku = fopen("girisler.txt", "r");
    FILE *fYazdir = fopen("casuslar.txt", "w");
    if (!fOku || !fYazdir) {
        perror("Dosya acilamadi veya olusturulamadi.\n");
        return 1;
    }

    int kimlik[12];
    int toplamKimlik = 0;
    while (toplamKimlik < 12 && fscanf(fOku, "%d", &kimlik[toplamKimlik]) == 1) {
        toplamKimlik++;
    }

    int yazildi[12] = {0}; // Array to keep track of written duplicates

    for (int i = 0; i < toplamKimlik - 1; i++) {
        for (int j = i + 1; j < toplamKimlik; j++) {
            if (kimlik[j] == kimlik[i] && !yazildi[i]) {
                fprintf(fYazdir, "%d\n", kimlik[i]);
                yazildi[i] = 1; // Mark this identity as written
                break;
            }
        }
    }

    fclose(fOku);
    fclose(fYazdir);
    printf("Dosya olusturuldu.\n");
    return 0;
}

