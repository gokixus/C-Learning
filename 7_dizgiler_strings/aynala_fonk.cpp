#include <stdio.h>
#include <string.h>

void aynala(char *cumle, char *aranacak, char *yerine_konacak) {
    char *konum = strstr(cumle, aranacak);
    while(konum != NULL) {
        memmove(konum + strlen(yerine_konacak), konum + strlen(aranacak), strlen(konum) - strlen(aranacak) + 1);
        memcpy(konum, yerine_konacak, strlen(yerine_konacak));
        konum = strstr(konum + strlen(yerine_konacak), aranacak);
    }
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

