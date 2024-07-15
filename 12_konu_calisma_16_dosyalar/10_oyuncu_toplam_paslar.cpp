#include <stdio.h>
#include <string.h>

struct oyuncular {
    char ad[15];
    char soyad[15];
    int hataliPas;
    int dogruPas;
} oyuncu[10];

void ekle(struct oyuncular oyuncu[], int *toplamOyuncu, FILE *dosya) {
    while (fscanf(dosya, "%s %s %d %d", oyuncu[*toplamOyuncu].ad, oyuncu[*toplamOyuncu].soyad, 
                  &oyuncu[*toplamOyuncu].hataliPas, &oyuncu[*toplamOyuncu].dogruPas) == 4) {
        int bulundu = 0;
        for (int i = 0; i < *toplamOyuncu; i++) {
            if (strcmp(oyuncu[i].ad, oyuncu[*toplamOyuncu].ad) == 0 && 
                strcmp(oyuncu[i].soyad, oyuncu[*toplamOyuncu].soyad) == 0) {
                oyuncu[i].dogruPas += oyuncu[*toplamOyuncu].dogruPas;
                oyuncu[i].hataliPas += oyuncu[*toplamOyuncu].hataliPas;
                bulundu = 1;
                break;
            }
        }
        if (!bulundu) {
            (*toplamOyuncu)++;
        }
    }
    fclose(dosya);
}

void yazdir(struct oyuncular oyuncu[], int toplamOyuncu, const char *dosyaAdi) {
    FILE *toplamPas = fopen(dosyaAdi, "w");
    if (!toplamPas) {
        perror("Dosya olusturulamadi.\n");
        return;
    }

    for (int i = 0; i < toplamOyuncu; i++) {
        fprintf(toplamPas, "%s %s %d %d\n", oyuncu[i].ad, oyuncu[i].soyad, oyuncu[i].hataliPas, oyuncu[i].dogruPas);
    }

    fclose(toplamPas);
    printf("Dosya olusturuldu.\n");
}

int main() {
    FILE *pasOku = fopen("paslar.txt", "r");
    if (!pasOku) {
        perror("Dosya acilamadi.\n");
        return 1;
    }

    int toplamOyuncu = 0;
    ekle(oyuncu, &toplamOyuncu, pasOku);
    yazdir(oyuncu, toplamOyuncu, "toplamPaslar.txt");

    return 0;
}

