#include <stdio.h>

#define PEYNIR 8
#define AILE 10

int main() {
    FILE *dosyaOku = fopen("puanlar.txt", "r");
    FILE *dosyaYaz = fopen("sonuclar12.txt", "w");
    if(!dosyaOku || !dosyaYaz) {
        perror("Dosya acilamadi veya olusturulamadi.\n");
        return 1;
    }
    
    int puanlar[PEYNIR][AILE];
    int toplamPuan = 0;

    // Initialize the array to zero
    for (int i = 0; i < PEYNIR; i++) {
        for (int j = 0; j < AILE; j++) {
            puanlar[i][j] = 0;
        }
    }

    // Read the values from the file into the array
    for (int i = 0; i < PEYNIR; i++) {
        for (int j = 0; j < AILE; j++) {
            if (fscanf(dosyaOku, "%d", &puanlar[i][j]) != 1) {
                fprintf(stderr, "Dosya okuma hatasi.\n");
                fclose(dosyaOku);
                fclose(dosyaYaz);
                return 1;
            }
            toplamPuan += puanlar[i][j];
        }
    }

    int enb = toplamPuan; // Assuming you want to store the highest total score

    // Find the most liked cheese product
    int enCokBegenilenPeynir = 0;
    int maxPuan = 0;
    for (int i = 0; i < PEYNIR; i++) {
        int peynirToplam = 0;
        for (int j = 0; j < AILE; j++) {
            peynirToplam += puanlar[i][j];
        }
        if (peynirToplam > maxPuan) {
            maxPuan = peynirToplam;
            enCokBegenilenPeynir = i;
        }
    }

    // Find the least liked family
    int enAzBegenilenAile = 0;
    int minPuan = toplamPuan; // Start with the maximum possible value
    for (int j = 0; j < AILE; j++) {
        int aileToplam = 0;
        for (int i = 0; i < PEYNIR; i++) {
            aileToplam += puanlar[i][j];
        }
        if (aileToplam < minPuan) {
            minPuan = aileToplam;
            enAzBegenilenAile = j;
        }
    }
 
    fprintf(dosyaYaz, "En cok begenilen %d. nolu peynir ürünü\n", enCokBegenilenPeynir+1);
    fprintf(dosyaYaz, "En az beðenen aile no: %d\n", enAzBegenilenAile+1);

    fclose(dosyaOku);
    fclose(dosyaYaz);

    return 0;
}

