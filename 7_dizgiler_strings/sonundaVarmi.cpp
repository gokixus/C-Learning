#include <stdio.h>
#include <string.h>

int sonundaVarmi(char *s1, char *s2);

int main() {
    char s1[] = "A bulbul neden kondun dalimdaki asmaya";
    char s2[] = "asmaya";
    printf("%d\n", sonundaVarmi(s1, s2));
    return 0;
}

int sonundaVarmi(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len2 > len1) {
        return 0;
    }

    int i = len1 - 1;
    int j = len2 - 1;
    while (j >= 0) {
        if (s1[i] != s2[j]) {
            return 0;  
        }
        i--;
        j--;
    }
    return 1;
}

