#include <stdio.h>
#include <string.h>

int main() {
    FILE *pOku = fopen("hatalar.dat", "r");
    FILE *pYaz = fopen("mors.txt", "w");
    if (!pOku || !pYaz) {
        perror("Dosya acilamadi veya olusturulamadi.\n");
        return 1;
    }
    
    char *morsKodlari[] = {"-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."};
    int sayi;
    
    while (fscanf(pOku, "%d", &sayi) == 1) {
        char rakamlar[20];
        sprintf(rakamlar, "%d", sayi);  // Convert the integer to a string
        for (int i = 0; i < strlen(rakamlar); i++) {
            int rakam = rakamlar[i] - '0';  // Convert character to integer
            if (rakam >= 0 && rakam <= 9) {
                fprintf(pYaz, "%s ", morsKodlari[rakam]);
            }
        }
        fprintf(pYaz, "\n");  // Move to the next line after each number
    }
    
    fclose(pOku);
    fclose(pYaz);
    printf("Dosya olusturuldu.\n");
    return 0;
}

