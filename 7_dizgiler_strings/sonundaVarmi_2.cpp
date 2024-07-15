#include <stdio.h>
#include <string.h>
#include <ctype.h>

int sonundaVarmi(char *s1, char *s2) {
    char *kelimeler[100];
    int kelimeAdet = 0;
    
    if(ispunct(s1[strlen(s1)-1])) {
    	s1[strlen(s1)-1] = '\0';
	}

    char *str = strtok(s1, " ");
    while (str != NULL) {
        kelimeler[kelimeAdet++] = str;
        str = strtok(NULL, " ");
    }

    // Check if the last word is equal to s2
    if (kelimeAdet > 0 && strcmp(kelimeler[kelimeAdet - 1], s2) == 0) {
        return 1; // s2 is at the end of the string
    } else {
        return 0; // s2 is not at the end of the string
    }
}

int main() {
    char s1[] = "A bulbul neden kondun dalimdaki asmaya,";
    char s2[] = "asmaya";
    printf("%d", sonundaVarmi(s1, s2));
    return 0;
}

