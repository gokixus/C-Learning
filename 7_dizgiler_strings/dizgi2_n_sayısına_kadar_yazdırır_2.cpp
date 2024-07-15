#include <stdio.h>

// Dizgi kopyalama fonksiyonu
void ntanekopyala(char* hedef, const char* kaynak, int kopyalanacak_karakter_sayisi) {
    int i;
    for (i = 0; i < kopyalanacak_karakter_sayisi; ++i) {
        hedef[i] = kaynak[i];
    }
    hedef[i] = '\0'; // Sonuna null karakteri ekle
}

int main() {
    char s1[10], s2[100] = "Bilgisayar";
    ntanekopyala(s1, s2, 5);
    printf("%s", s1);
    return 0;
}

