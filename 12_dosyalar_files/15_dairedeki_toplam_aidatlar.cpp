#include <stdio.h>
#include <string.h>

struct daire {
    char ad[15];
    char soyad[15];
    float aidat;
} daireler[15];

void yazdir(struct daire daireler[], int toplamDaireler, const char *dosyaAdi) {
    FILE *toplamAidat = fopen(dosyaAdi, "w");
    if (!toplamAidat) {
        perror("Dosya olusturulamadi.\n");
        return;
    }
    
    for (int i = 0; i < toplamDaireler; i++) {
        fprintf(toplamAidat, "%s %s %.2f\n", daireler[i].ad, daireler[i].soyad, daireler[i].aidat);
    }
    
    fclose(toplamAidat);
    printf("Dosya olusturuldu.\n");
}

int main() {
    FILE *aidatOku = fopen("aidat.txt", "r");
    if (!aidatOku) {
        perror("Dosya acilamadi.\n");
        return 1;
    }
    
    int toplamDaireler = 0;

    while (fscanf(aidatOku, "%s %s %f", daireler[toplamDaireler].ad, daireler[toplamDaireler].soyad, &daireler[toplamDaireler].aidat) == 3) {
        int bulundu = 0;
        for (int i = 0; i < toplamDaireler; i++) {
            if (strcmp(daireler[i].ad, daireler[toplamDaireler].ad) == 0 && strcmp(daireler[i].soyad, daireler[toplamDaireler].soyad) == 0) {
                daireler[i].aidat += daireler[toplamDaireler].aidat;
                bulundu = 1;
                break;
            }
        }
        if (!bulundu) {
            toplamDaireler++;
        }
    }

    fclose(aidatOku);

    // Call the yazdir function to write to "toplam.txt"
    yazdir(daireler, toplamDaireler, "toplamAidat.txt");

    return 0;
}

