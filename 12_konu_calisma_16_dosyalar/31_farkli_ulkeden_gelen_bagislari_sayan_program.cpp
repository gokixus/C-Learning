#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CURRENCIES 31 // Maksimum farkl� para birimi say�s�

// Her para birimi i�in toplam miktar� tutacak yap�
typedef struct {
    char currency[4]; // 3 harfli para birimi kodu + null sonland�r�c�
    double total;
} CurrencyTotal;

// qsort i�in iki CurrencyTotal yap�s�n� kar��la�t�ran fonksiyon
int compare(const void *a, const void *b) {
    CurrencyTotal *totalA = (CurrencyTotal *)a;
    CurrencyTotal *totalB = (CurrencyTotal *)b;
    if (totalB->total > totalA->total) return 1;
    if (totalB->total < totalA->total) return -1;
    return 0;
}

int main() {
    FILE *fpRead = fopen("yardim.txt", "r");
    FILE *fpWrite = fopen("toplam.txt", "w");
    
    if (fpRead == NULL || fpWrite == NULL) {
        perror("Dosya a��l�rken hata");
        return 1;
    }
    
    CurrencyTotal totals[MAX_CURRENCIES] = {0};
    int numCurrencies = 0;
    
    // Dosyay� okuyun ve her para birimi i�in miktarlar� toplay�n
    while (!feof(fpRead)) {
        double amount;
        char currency[4];
        if (fscanf(fpRead, "%lf %s\n", &amount, currency) == 2) {
            int found = 0;
            for (int i = 0; i < numCurrencies; i++) {
                if (strcmp(totals[i].currency, currency) == 0) {
                    totals[i].total += amount;
                    found = 1;
                    break;
                }
            }
            if (!found && numCurrencies < MAX_CURRENCIES) {
                strcpy(totals[numCurrencies].currency, currency);
                totals[numCurrencies].total = amount;
                numCurrencies++;
            }
        }
    }
    
    // Toplamlar� azalan s�rada s�ralay�n
    qsort(totals, numCurrencies, sizeof(CurrencyTotal), compare);
    
    // S�ral� toplamlar� toplam.txt'ye yaz�n
    for (int i = 0; i < numCurrencies; i++) {
        fprintf(fpWrite, "%.2f %s\n", totals[i].total, totals[i].currency);
    }
    
    fclose(fpRead);
    fclose(fpWrite);
    
    return 0;
}

