#include <stdio.h>
#include <string.h>

int main() {
	FILE *pOku1 = fopen("kalori.txt", "r");
	FILE *pOku2 = fopen("siparis.txt", "r");
	if(!pOku1 || !pOku2) {
		perror("Dosyalar acilamadi.\n");
		return 1;
	}
	
	char yiyecekler[25];
	char siparisler[25];
	int kalori;
	float porsiyon;
	float toplamKalori = 0.0;
	while(fscanf(pOku1, "%s %d", yiyecekler, &kalori) == 2) {
		rewind(pOku2);
		while(fscanf(pOku2, "%s %f", siparisler, &porsiyon) == 2) {
			if(strcmp(yiyecekler, siparisler) == 0) {
				toplamKalori += porsiyon * kalori; 
			}
		}
	}
	fclose(pOku1);
	fclose(pOku2);
	printf("Alinan toplam kalori: %0.2f\n", toplamKalori);
	return 0;
}

