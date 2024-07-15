#include <stdio.h>
#include <string.h>

#define CAMPUS_PHONE_PREFIX "031224666"
#define CAMPUS_PHONE_LENGTH 11

int telKontrol(char *telefonNo) {
    // Check if the phone number is exactly 11 characters long
    if (strlen(telefonNo) != CAMPUS_PHONE_LENGTH) {
        return 0;
    }
    // Check if the phone number starts with the campus prefix
    if (strncmp(telefonNo, CAMPUS_PHONE_PREFIX, strlen(CAMPUS_PHONE_PREFIX)) == 0) {
        return 1;
    }
    return 0;
}

int main() {
    FILE *fOku = fopen("santral.txt", "r");
    if (!fOku) {
        perror("Dosya açilamadi.\n");
        return 1;
    }

    char arayanNo[12], arananNo[12];
    float gorusmeSuresi;
    float topArama = 0.0, topAranma = 0.0, enCokKonusulanSure = 0.0;
    char enCokKonusulanTelNo[12] = "";

    char telefonNo[12];
    printf("Telefon numarasini giriniz: ");
    scanf("%11s", telefonNo);

    while (telKontrol(telefonNo) == 0) {
        printf("HATA!!! Bu telefon numarasi kampuse ait degildir.\n");
        printf("Telefon numarasini giriniz: ");
        scanf("%11s", telefonNo);
    }

    // Reset file pointer to the beginning
    fseek(fOku, 0, SEEK_SET);

    // Read from santral.txt and process the call data
    while (fscanf(fOku, "%11s %11s %f", arayanNo, arananNo, &gorusmeSuresi) != EOF) {
        if (strcmp(arayanNo, telefonNo) == 0) {
            topArama += gorusmeSuresi;
            if (gorusmeSuresi > enCokKonusulanSure) {
                enCokKonusulanSure = gorusmeSuresi;
                strcpy(enCokKonusulanTelNo, arananNo);
            }
        }
        if (strcmp(arananNo, telefonNo) == 0) {
            topAranma += gorusmeSuresi;
        }
    }
    fclose(fOku);

    printf("%s numarali telefon\n", telefonNo);
    printf("Toplam arama suresi: %0.2f\n", topArama);
    printf("Toplam aranma suresi: %0.2f\n", topAranma);
    printf("Bir defada en uzun konusulan telefon: %s (%0.2f dk)\n", enCokKonusulanTelNo, enCokKonusulanSure);

    return 0;
}

