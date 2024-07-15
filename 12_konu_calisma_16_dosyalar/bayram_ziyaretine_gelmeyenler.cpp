#include <stdio.h>

#define TOPLAM_DAIRE 20

int main() {
    FILE *fOku = fopen("bayram.txt", "r");
    FILE *fYaz = fopen("yoklar.txt", "w");
    if (!fOku || !fYaz) {
        perror("Dosya açilamadi veya oluþturulamadý.\n");
        return 1;
    }

    int daireMevcut[TOPLAM_DAIRE] = {0};
    int daireNo;
    char ad[15], soyad[15];

    // Read from bayram.txt and mark the existing apartments
    while (fscanf(fOku, "%d %s %s", &daireNo, ad, soyad) != EOF) {
        if (daireNo >= 1 && daireNo <= TOPLAM_DAIRE) {
            daireMevcut[daireNo - 1] = 1;
        }
    }
    fclose(fOku);

    // Write the missing apartments to yoklar.txt
    for (int i = 0; i < TOPLAM_DAIRE; i++) {
        if (daireMevcut[i] == 0) {
            fprintf(fYaz, "%d\n", i + 1);
        }
    }
    fclose(fYaz);

    printf("yoklar.txt dosyasi oluþturuldu.\n");
    return 0;
}

