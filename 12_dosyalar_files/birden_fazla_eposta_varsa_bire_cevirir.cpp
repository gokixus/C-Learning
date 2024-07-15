#include <stdio.h>
#include <string.h>

#define MAX_EMAILS 1000
#define EMAIL_LENGTH 50

int main() {
    FILE *file1 = fopen("akademik.txt", "r");
    FILE *file2 = fopen("eposta.txt", "w");
    if (!file1 || !file2) {
        printf("Dosya olusturulamadi veya acilamadi.\n");
        return 1;
    }

    char eposta[EMAIL_LENGTH];
    char emails[MAX_EMAILS][EMAIL_LENGTH];
    int email_count = 0;

    // E-postalarý oku ve diziye ekle
    while (fscanf(file1, "%s", eposta) != EOF) {
        int found = 0;
        for (int i = 0; i < email_count; i++) {
            if (strcmp(emails[i], eposta) == 0) {
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(emails[email_count], eposta);
            email_count++;
        }
    }

    // E-postalarý ikinci dosyaya yaz
    for (int i = 0; i < email_count; i++) {
        fprintf(file2, "%s\n", emails[i]);
    }

    fclose(file1);
    fclose(file2);

    return 0;
}

