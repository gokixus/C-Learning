#include <stdio.h>
#include <string.h>

int main() {
    char misra1[1000], misra2[1000], kelime1[1000], kelime2[1000];
    int i, len;

    printf("Birinci mýsrayý giriniz: ");
    fgets(misra1, 1000, stdin);
    misra1[strlen(misra1) - 1] = '\0'; // newline karakterini sil

    printf("Ýkinci mýsrayý giriniz: ");
    fgets(misra2, 1000, stdin);
    misra2[strlen(misra2) - 1] = '\0'; // newline karakterini sil

    len = strlen(misra1);
    for (i = len - 1; i >= 0; i--) {
        if (misra1[i] == ' ') {
            strcpy(kelime1, &misra1[i + 1]);
            break;
        }
    }

    len = strlen(misra2);	
    for (i = len - 1; i >= 0; i--) {
        if (misra2[i] == ' ') {
            strcpy(kelime2, &misra2[i + 1]);
            break;
        }
    }

    if (strcmp(kelime1, kelime2) == 0)
        printf("Girilen mýsralarda cinaslý kafiye vardýr.\n");
    else
        printf("Girilen mýsralarda cinaslý kafiye yoktur.\n");

    return 0;
}

