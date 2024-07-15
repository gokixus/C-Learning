#include <stdio.h>

int main() {
	int ilk_endeks;
	int son_endeks;
	int kdv;
	
	printf("ilk endeksi giriniz: ");
	scanf("%d", &ilk_endeks);
	printf("son endeksi giriniz: ");
	scanf("%d", &son_endeks);
	printf("KDV oranini giriniz: ");
	scanf("%d", &kdv);
	
	float elektrik_birim_fiyati = 0.159838;
	int tuketim_miktari;
	float tuketim_tutari;
	float kdv_fiyati;
	float toplam;
	
	tuketim_miktari = son_endeks - ilk_endeks;
    tuketim_tutari = tuketim_miktari*elektrik_birim_fiyati;
	kdv_fiyati = tuketim_tutari*kdv/100;
	toplam = tuketim_tutari + kdv_fiyati;
	printf("\nElektrik fature bedeli: %f", toplam);
	
	return 0;
}
