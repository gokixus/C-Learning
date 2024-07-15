#include <stdio.h>
#include <string.h>

int main() {
    char dosyaAdi[25];
    printf("Enter the file name: ");
    fgets(dosyaAdi, sizeof(dosyaAdi), stdin);
    dosyaAdi[strcspn(dosyaAdi, "\n")] = '\0'; // Remove the newline character

    FILE *dosya = fopen(dosyaAdi, "w");
    if (dosya == NULL) {
        printf("File could not be created.\n");
        return 1;
    }

    char yazilacak[100];
    printf("Enter text (press Enter to finish):\n");
    while (fgets(yazilacak, sizeof(yazilacak), stdin)) {
        if (yazilacak[0] == '\n') // User pressed Enter
            break;
        fputs(yazilacak, dosya);
    }

    fclose(dosya);
    printf("File saved successfully.\n");
    return 0;
}

