#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Alt fonksiyon: Verilen c�mledeki toplam harf say�s�n� ve hatal� harf say�s�n� hesaplar.
void hesapla(char c[], int *toplamHarf, int *hataliHarf) {
    int i, j, k, count;
    *toplamHarf = 0;
    *hataliHarf = 0;
    int length = strlen(c);

    // C�mlenin t�m karakterlerini kontrol et
    for (i = 0; i < length; i++) {
        count = 1;
        // E�er bir harfse, ayn� harf olup olmad���n� kontrol et
        if (isalpha(c[i])) {
            for (j = i + 1; j < length; j++) {
                if (c[i] == c[j]) {
                    count++;
                }
            }

            // Ayn� harf 3 kere tekrar etmi�se
            if (count % 3 == 0) {
                *toplamHarf += 1;
            } else {
                *hataliHarf += 1;
            }

            // Ayn� harfi bir daha saymamak i�in ilgili harfleri i�aretle
            for (k = i + 1; k < length; k++) {
                if (c[i] == c[k]) {
                    c[k] = ' ';
                }
            }
        }
    }
}

int main() {
    char cumle[1000];
    int toplamHarf, hataliHarf;

    printf("Hastanin cumlesini giriniz: ");
    fgets(cumle, sizeof(cumle), stdin);

    // Sat�r sonu karakterini kald�r
    cumle[strcspn(cumle, "\n")] = 0;

    // Harf ve hata say�s�n� hesapla
    hesapla(cumle, &toplamHarf, &hataliHarf);

    printf("Bu cumle gercekte %d harften olusur.\n", toplamHarf);
    printf("Hasta %d harfte hata yapmistir.\n", hataliHarf);

    return 0;
}

