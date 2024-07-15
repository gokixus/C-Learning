#include <stdio.h>
#include <string.h>
#include <ctype.h>

int kacinci(char*, char*);

int main() {
	char s1[] = "Bil102 final sinavi bitti.";
	char s2[] = "sinavi";
	
	printf("%s \ndizgisinde %s dizgisi %d. kelimededir.", s1, s2, kacinci(s1, s2));
	return 0;
}

int kacinci(char *s1, char *s2) {
	char temp[100];
	strcpy(temp, s1);
    int kacinciKelime = 0;
    char *str = strtok(temp, " ");
    while (str != NULL) {
        kacinciKelime++;
        if (strcmp(str, s2) == 0) {
            return kacinciKelime;
        }
        str = strtok(NULL, " ");
    }
    return 0;
}
