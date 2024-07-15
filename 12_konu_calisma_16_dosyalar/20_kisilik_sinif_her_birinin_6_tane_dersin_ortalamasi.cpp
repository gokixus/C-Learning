#include <stdio.h>

struct Ogrenci {
    int no;
    int dersNotu[6];
};

int main() {
    FILE *dosya1 = fopen("sinif.txt", "r");
    FILE *dosya2 = fopen("sonuclar.txt", "w");
    
    if (dosya1 == NULL || dosya2 == NULL) {
        printf("Dosya acilamadi veya olusturulamadi.\n");
        return 1;
    }
    
    struct Ogrenci ogrenciler[20];
    double dersOrtalamalari[6] = {0};
    double sinifOrtalamasi = 0;
    
    for (int i = 0; i < 20; i++) {
        int okunan = fscanf(dosya1, "%d %d %d %d %d %d %d", &ogrenciler[i].no,
                            &ogrenciler[i].dersNotu[0], &ogrenciler[i].dersNotu[1],
                            &ogrenciler[i].dersNotu[2], &ogrenciler[i].dersNotu[3],
                            &ogrenciler[i].dersNotu[4], &ogrenciler[i].dersNotu[5]);
        
        if (okunan == 7) {
            // Calculate the average of each student's exam scores
            double dersToplami = 0;
            for (int j = 0; j < 6; j++) {
                dersToplami += ogrenciler[i].dersNotu[j];
                dersOrtalamalari[j] += ogrenciler[i].dersNotu[j];
            }
            double dersOrtalamasi = dersToplami / 6;
            
            // Update the overall class average
            sinifOrtalamasi += dersOrtalamasi;
            
            // Write results to "sonuclar.txt" file
            fprintf(dosya2, "%d %.2lf\n", ogrenciler[i].no, dersOrtalamasi);
        }
    }
    
    // Calculate and write the class average
    sinifOrtalamasi /= 20;
    fprintf(dosya2, "\nSinif Ortalamasi: %.2lf\n", sinifOrtalamasi);
    
    // Write individual subject averages
    for (int j = 0; j < 6; j++) {
        dersOrtalamalari[j] /= 20;
        fprintf(dosya2, "Ders %d Ortalamasi: %.2lf\n", j + 1, dersOrtalamalari[j]);
    }
    
    fclose(dosya1);
    fclose(dosya2);
    
    printf("Sonuclar 'sonuclar.txt' dosyasina yazildi.\n");
    
    return 0;
}

