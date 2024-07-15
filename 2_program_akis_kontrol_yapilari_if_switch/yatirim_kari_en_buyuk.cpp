#include <stdio.h>

int main() {
	int ser1, ser2, ser3, getiri1, getiri2, getiri3;
	printf("Birincinin sermayesi ve yillik getirisi: ");
	scanf("%d%d", &ser1, &getiri1);
	printf("Ikincinin sermayesi ve yillik getirisi: ");
	scanf("%d%d", &ser2, &getiri2);
	printf("Ucununun sermayesi ve yillik getirisi: ");
	scanf("%d%d", &ser3, &getiri3);
	
	int kar1, kar2, kar3;
	kar1= 15*getiri1 - ser1;
	kar2= 15*getiri2 - ser2;
	kar3= 15*getiri3 - ser3;
	
	if(kar1>kar2 && kar2>kar3)
	    printf("\nEn karli yatirim 1. yatirimdir.\n(15 yil sonundaki toplam getiri= %d, net kar= %d)", 15*getiri1, kar1);
	if(kar1>kar3 && kar3>kar2)
	    printf("\nEn karli yatirim 1. yatirimdir.\n(15 yil sonundaki toplam getiri= %d, net kar= %d)", 15*getiri1, kar1);
	if(kar2>kar1 && kar1>kar3)
	    printf("\nEn karli yatirim 2. yatirimdir.\n(15 yil sonundaki toplam getiri= %d, net kar= %d)", 15*getiri2, kar2);
	if(kar2>kar3 && kar3>kar1)
	    printf("\nEn karli yatirim 2. yatirimdir.\n(15 yil sonundaki toplam getiri= %d, net kar= %d)", 15*getiri2, kar2);
	if(kar3>kar1 && kar1>kar2)
	    printf("\nEn karli yatirim 3. yatirimdir.\n(15 yil sonundaki toplam getiri= %d, net kar= %d)", 15*getiri3, kar3);
	if(kar3>kar2 && kar2>kar1)
	    printf("\nEn karli yatirim 3. yatirimdir.\n(15 yil sonundaki toplam getiri= %d, net kar= %d)", 15*getiri3, kar3);
	
	return 0;
}
