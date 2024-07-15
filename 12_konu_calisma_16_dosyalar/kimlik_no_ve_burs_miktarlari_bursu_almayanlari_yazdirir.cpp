#include <stdio.h>
#include <string.h>

int main() {
    FILE *fOku1 = fopen("burs.txt", "r");
    FILE *fOku2 = fopen("verilen.txt", "r");
    FILE *fYazdir = fopen("almayan.txt", "w");
    
    if (!fOku1 || !fOku2 || !fYazdir) {
        perror("Dosyalar acilamadi veya olusturulamadi.\n");
        return 1;
    }
    
    char tcKimlik1[15], tcKimlik2[15];
    float bursMiktari1, bursMiktari2;
    float toplamBursMiktari = 0;
    
    while (fscanf(fOku1, "%s %f", tcKimlik1, &bursMiktari1) != EOF) {
        rewind(fOku2);
        
        int eslesme_bulundu = 0;
        
        while (fscanf(fOku2, "%s %f", tcKimlik2, &bursMiktari2) != EOF) {
            if (strcmp(tcKimlik1, tcKimlik2) == 0) {
                eslesme_bulundu = 1;
                break;
            }
        }
        
        if (!eslesme_bulundu) {
            fprintf(fYazdir, "%s %0.2f\n", tcKimlik1, bursMiktari1);
            toplamBursMiktari += bursMiktari1;
        }
    }
    
    fprintf(fYazdir, "\nToplam Burs Miktari: %0.2f\n", toplamBursMiktari);
    
    fclose(fOku1);
    fclose(fOku2);
    fclose(fYazdir);
    
    printf("Dosya olusturuldu.\n");
    
    return 0;
}

