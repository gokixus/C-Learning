#include <stdio.h>
#include <string.h>

int tekrarEdenKacTane(char s[]) {
    int uzunluk = strlen(s);
    int sayac = 0;
    
    for (int i = 0; i < uzunluk; i++) {
        for (int j = i + 1; j < uzunluk; j++) {
            if (s[i] == s[j]) {
                sayac++;
                break;
            }
        }
    }
    
    return sayac;
}

int main() {
    char s[] = "Bilgisayar";
    printf("%d\n", tekrarEdenKacTane(s));
    
    return 0;
}

