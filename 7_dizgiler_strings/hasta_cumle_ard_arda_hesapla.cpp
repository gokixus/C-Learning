#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Alt fonksiyon: Verilen cümledeki toplam harf sayýsýný ve hatalý harf sayýsýný hesaplar.
void hesapla(char c[], int *toplamHarf, int *hataliHarf) {
    int i, j, k, count;
    *toplamHarf = 0;
    *hataliHarf = 0;
    int length = strlen(c);

    // Cümlenin tüm karakterlerini kontrol et
    for (i = 0; i < length; i++) {
        count = 1;
        // Eðer bir harfse, ayný harf olup olmadýðýný kontrol et
        if (isalpha(c[i])) {
            for (j = i + 1; j < length; j++) {
                if (c[i] == c[j]) {
                    count++;
                }
            }

            // Ayný harf 3 kere tekrar etmiþse
            if (count % 3 == 0) {
                *toplamHarf += 1;
            } else {
                *hataliHarf += 1;
            }

            // Ayný harfi bir daha saymamak için ilgili harfleri iþaretle
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

    // Satýr sonu karakterini kaldýr
    cumle[strcspn(cumle, "\n")] = 0;

    // Harf ve hata sayýsýný hesapla
    hesapla(cumle, &toplamHarf, &hataliHarf);

    printf("Bu cumle gercekte %d harften olusur.\n", toplamHarf);
    printf("Hasta %d harfte hata yapmistir.\n", hataliHarf);

    return 0;
}

