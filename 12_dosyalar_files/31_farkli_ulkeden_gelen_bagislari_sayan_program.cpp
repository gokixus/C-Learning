#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CURRENCIES 31 // Maksimum farklý para birimi sayýsý

// Her para birimi için toplam miktarý tutacak yapý
typedef struct {
    char currency[4]; // 3 harfli para birimi kodu + null sonlandýrýcý
    double total;
} CurrencyTotal;

// qsort için iki CurrencyTotal yapýsýný karþýlaþtýran fonksiyon
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
        perror("Dosya açýlýrken hata");
        return 1;
    }
    
    CurrencyTotal totals[MAX_CURRENCIES] = {0};
    int numCurrencies = 0;
    
    // Dosyayý okuyun ve her para birimi için miktarlarý toplayýn
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
    
    // Toplamlarý azalan sýrada sýralayýn
    qsort(totals, numCurrencies, sizeof(CurrencyTotal), compare);
    
    // Sýralý toplamlarý toplam.txt'ye yazýn
    for (int i = 0; i < numCurrencies; i++) {
        fprintf(fpWrite, "%.2f %s\n", totals[i].total, totals[i].currency);
    }
    
    fclose(fpRead);
    fclose(fpWrite);
    
    return 0;
}

