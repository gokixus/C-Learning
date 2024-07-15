#include <stdio.h>

int main() {
    int sayi, ab, cd, ba, dc;
    
    printf("Dort basamakli sayiyi giriniz: ");
    scanf("%d", &sayi);
    
    ab = (sayi/1000)*10 + (sayi/100)%10; // ilk iki basamak
    cd = (sayi/10)%10*10 + sayi%10; // son iki basamak
    ba = (sayi/100)%10*10 + (sayi/1000)%10; // (cd%10)*10 + cd/10; // yer degistirilmis hali
    dc = sayi%10*10 + (sayi/10)%10; //(ab * cd) / ba; // kontrol edilecek deger
    
    if(ab*cd == ba*dc)
        printf("\nGirilen sayi tersyuz bir sayidir.");
	else
        printf("\nGirilen sayi tersyuz bir sayi degildir.\n");
    
    return 0;
}

