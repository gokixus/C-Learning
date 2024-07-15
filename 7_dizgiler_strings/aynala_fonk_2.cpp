#include <stdio.h>
#include <string.h>

void aynala(char* cumle, char* aranacak, char* yerine_konacak) {
    char yeni_cumle[1000] = "";
    char* kelime = strtok(cumle, " ");
    while(kelime != NULL) {
        if(strcmp(kelime, aranacak) == 0) {
            strcat(yeni_cumle, yerine_konacak);
        } else {
            strcat(yeni_cumle, kelime);
        }
        strcat(yeni_cumle, " ");
        kelime = strtok(NULL, " ");
    }
    strcpy(cumle, yeni_cumle);
}

int main() {
    char cumle[1000];
    char aranacak[100];
    char yerine_konacak[100];

    printf("Cümleyi giriniz:\n");
    fgets(cumle, sizeof(cumle), stdin);

    printf("Aranacak kelimeyi giriniz:\n");
    scanf("%s", aranacak);

    printf("Yerine konacak kelimeyi giriniz:\n");
    scanf("%s", yerine_konacak);

    aynala(cumle, aranacak, yerine_konacak);

    printf("Deðiþmiþ hali:\n%s", cumle);

    return 0;
}

