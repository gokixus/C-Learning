#include <stdio.h>
#include <string.h>

int main() {
	FILE *asilarOku = fopen("asilar.txt", "r");
	FILE *zorunluOku = fopen("zorunluAsilar.txt", "r");
	FILE *dozYazdir = fopen("dozlar.txt", "w");
	if (!asilarOku || !zorunluOku || !dozYazdir) {
		perror("Dosya acilamadi veya olusturulamadi.\n");
		return 1;
	}

	char asi1[15], asi2[15], tarih[25];
	int zorunluDozAdedi, alinanDoz;
	
	while (fscanf(zorunluOku, "%s %d", asi2, &zorunluDozAdedi) != EOF) {
		rewind(asilarOku);
		alinanDoz = 0;
		while (fscanf(asilarOku, "%s %s", asi1, tarih) != EOF) {
			if (strcmp(asi1, asi2) == 0) {
				alinanDoz++;
			}
		}
		fprintf(dozYazdir, "%s %d ", asi2, alinanDoz);
		if (alinanDoz >= zorunluDozAdedi) {
			fprintf(dozYazdir, "+\n");
		} else {
			fprintf(dozYazdir, "-\n");
		}
	}
	
	fclose(asilarOku);
	fclose(zorunluOku);
	fclose(dozYazdir);
	printf("dozlar.txt dosyasi olusturuldu.\n");
	return 0;
}

