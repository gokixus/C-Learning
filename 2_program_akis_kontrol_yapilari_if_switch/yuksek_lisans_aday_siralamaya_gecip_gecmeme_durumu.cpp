#include <stdio.h>

int main() {
	int ales, yabanci_dil, mezuniyet_ortalama;
	printf("ALES puaninizi giriniz: ");
	scanf("%d", &ales);
	printf("Yabanci dil puaninizi giriniz: ");
	scanf("%d", &yabanci_dil);
	printf("Mezuniyet ortalamanizi giriniz: ");
	scanf("%d", &mezuniyet_ortalama);
	
	float aOrtalama = ales*0.5 + yabanci_dil*0.25 + mezuniyet_ortalama*0.25;
	printf("\n\nSiralama puaniniz: %f", aOrtalama);
	if(aOrtalama >= 60)
	    printf("\nSiralamaya girebilir!!!");
	else
	    printf("\nSiralamaya giremez!!!");
	
	return 0;
}
