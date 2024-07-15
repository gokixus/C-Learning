#include <stdio.h>
#include <string.h>

void kelimeTersCevir(char *kelime, int baslangic, int bitis) {
    while (baslangic < bitis) {
        char gecici = kelime[baslangic];
        kelime[baslangic] = kelime[bitis];
        kelime[bitis] = gecici;
        baslangic++;
        bitis--;
    }
}

void devrikYap(char *cumle) {
    int uzunluk = strlen(cumle);
    int baslangic = 0;
    
	if (cumle[uzunluk - 1] == '.') {
        cumle[uzunluk - 1] = '\0';
        uzunluk--;
    }
    
    // Cümlenin tamamýnýn ters çevrilmesi
    kelimeTersCevir(cumle, 0, uzunluk - 1);
    
    // Kelimelerin sýrayla ters çevrilmesi
    for (int i = 0; i < uzunluk; i++) {
        if (cumle[i] == ' ') {
            kelimeTersCevir(cumle, baslangic, i - 1);
            baslangic = i + 1;
        }
    }
    
    // Son kelimenin ters çevrilmesi
    kelimeTersCevir(cumle, baslangic, uzunluk - 1);
}

int main() {
    char cumle[100] = "baharda agaclar kuslar guzeldir.";
    devrikYap(cumle);
    printf("\nDevrik cumle = %s\n", cumle);
    getchar();
    return 0;
}

