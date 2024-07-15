#include <stdio.h>
#include <string.h>

void emailBreak(char posta[], int secim, char sonuc[]) {
    // E-posta adresinin @ i�aretini bulma
    char *at_isareti = strchr(posta, '@');
    
    // E-posta adresinin nokta i�aretinden sonraki k�sm�n� bulma
    char *nokta_isareti = strrchr(posta, '.');
    
    // E�er kullan�c� ad� isteniyorsa
    if (secim == 1) {
        strncpy(sonuc, posta, at_isareti - posta);
        sonuc[at_isareti - posta] = '\0';  // String sonunu belirtmek i�in
    }
    // E�er domain ad� isteniyorsa
    else if (secim == 2) {
        strncpy(sonuc, at_isareti + 1, nokta_isareti - at_isareti - 1);
        sonuc[nokta_isareti - at_isareti - 1] = '\0';  // String sonunu belirtmek i�in
    }
    // E�er k�k domain ad� isteniyorsa
    else if (secim == 3) {
        strncpy(sonuc, nokta_isareti + 1, strlen(nokta_isareti + 1));
    }
}

int main() {
    char posta[150];
    char str1[50], str2[50], str3[50];
    printf("Eposta adinizi giriniz: ");
    fgets(posta, 150, stdin);
    
    emailBreak(posta, 1, str1);
    emailBreak(posta, 2, str2);
    emailBreak(posta, 3, str3);
    
    printf("%s - %s - %s\n", str1, str2, str3);
    
    return 0;
}

