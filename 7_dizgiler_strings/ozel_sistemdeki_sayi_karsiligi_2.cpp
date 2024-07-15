#include <stdio.h>
#include <string.h>

int main() {
    char num[51];
    printf("Özel sayý sistemindeki sayýyý giriniz: ");
    scanf("%s", num);

    int len = strlen(num);
    int decimal = 0;

    for(int i = 0; i < len; i++) {
        if(num[i] == 'I') {
            decimal += 1;
        } else if(num[i] == 'U') {
            decimal += 10;
        } else if(num[i] == 'Z') {
            decimal += 100;
        }
    }

    printf("Girilen sayýnýn onluk sistemdeki karþýlýðý: %d\n", decimal);

    return 0;
}

