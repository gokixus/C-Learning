#include <stdio.h>
#include <string.h>
#include <ctype.h>

void hesapla(char*, int*, int*, int*);

int main() {
    char sampiyonluklar[255];
    printf("Sampiyonluklari giriniz(1959-): ");
    fgets(sampiyonluklar, sizeof(sampiyonluklar), stdin);
    sampiyonluklar[strcspn(sampiyonluklar, "\n")] = '\0';
    int bjk = 0, gs = 0, fb = 0;
    hesapla(sampiyonluklar, &bjk, &gs, &fb);
    printf("Besiktas yildiz sayisi\t\t: %d\nGalatasaray yildiz sayisi\t: %d\nFenerbahce yildiz sayisi\t: %d", bjk, gs, fb);
}

void hesapla(char *s, int *bjk, int *gs, int *fb) {
    int i, gs_adet = 0, bjk_adet = 0, fb_adet;
    for(i = 0 ; i < strlen(s); i++) {
        s[i] = toupper(s[i]);
        if(s[i] == 'B') {
            bjk_adet++;
        } else if(s[i] == 'G') {
            gs_adet++;
        } else if(s[i] == 'F') {
            fb_adet++;
        }
    }
    *bjk = bjk_adet/5;
    *gs = gs_adet/5;
    *fb = fb_adet/5;
}

