#include <stdio.h>

int main () {
	int ilk_gosterge, son_gosterge;
	
	printf("ilk gostergeyi giriniz: ");
	scanf("%d", &ilk_gosterge);
	printf("son gostergeyi giriniz: ");
	scanf("%d", &son_gosterge);
	
	int tuketim_miktari = son_gosterge - ilk_gosterge;
	printf("\n\nTuketim miktari: %d", tuketim_miktari);
	
	float su_metrekup_fiyati = 0.912857;
	float tuketim_tutari = tuketim_miktari * su_metrekup_fiyati;
	printf("\nTuketim tutari: %f", tuketim_tutari);
	
	float atiksu_bedeli = tuketim_tutari/2;
	printf("\nAtiksu bedeli: %f", atiksu_bedeli);
	
	float toplam = tuketim_tutari + atiksu_bedeli;
	printf("\nTOPLAM : %f", toplam);
	return 0;
}
