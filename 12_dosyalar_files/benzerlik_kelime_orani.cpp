#include <stdio.h>
#include <string.h>

double similar_text(char *str1, char *str2) {
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int maxLen = len1 > len2 ? len1 : len2;
	int bulunan = 0;
	
	for(int i = 0 ; i < len1 && i < len2 ; i++) {
		if(str1[i] == str2[i]) {
			bulunan++;
		}
	}
	return (double)bulunan / maxLen;
}

int main() {
	char word[15];
	printf("Search: ");
	scanf("%s", word);
	
	FILE *fOku = fopen("words.txt", "r");
	if(!fOku) {
		perror("Dosya acilamadi.\n");
		return 0;
	}
	
	char sonuc[15];
	char words[15];
	double yuksekBenzerlik = 0.0;
	while(fscanf(fOku, "%s", words) == 1) {
		double benzerlik = similar_text(word, words);
		if(benzerlik > yuksekBenzerlik) {
			yuksekBenzerlik = benzerlik;
			strcpy(sonuc, words);
		}
	}
	fclose(fOku);
	
	if(yuksekBenzerlik > 0) {
		printf("Did you mean ? %s (%0.2f)", sonuc, yuksekBenzerlik);
	} else {
		printf("No matching.\n");
	}
	
	return 0;
}
