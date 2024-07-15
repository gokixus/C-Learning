#include <stdio.h>
#include <string.h>

int main() {
    char dosyaAdi[20];
    printf("Ters kopyasi alinacak dosyanin adini giriniz: ");
    scanf("%s", dosyaAdi);
    FILE *dosya1 = fopen(dosyaAdi, "r");
    if (dosya1 == NULL) {
        printf("Dosya acilamadi.\n");
        return 1;
    }

    FILE *dosya2 = fopen("yedek.bak", "w");
    if (dosya2 == NULL) {
        printf("Dosya olusturulamadi.\n");
        fclose(dosya1);
        return 1;
    }

    char cumle[1000];
    while (fgets(cumle, 1000, dosya1) != NULL) {
        int uzunluk = strlen(cumle);
        if (cumle[uzunluk - 1] == '\n') {
            // Yeni satýr karakterini geçici olarak kaldýr
            cumle[uzunluk - 1] = '\0';
            uzunluk--;
        }
        // Ters çevirme iþlemi için döngü
        for (int i = uzunluk - 1; i >= 0; i--) {
            fputc(cumle[i], dosya2);
        }
        // Yeni satýr karakterini ekle
        fputc('\n', dosya2);
    }
    fclose(dosya1);
    fclose(dosya2);
    printf("Ýslem tamamlandi. Yeni dosya(yedek.bak) olusturuldu.\n");
    return 0;
}

