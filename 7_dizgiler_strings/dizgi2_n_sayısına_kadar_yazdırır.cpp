#include <stdio.h>

void ntanekopyala(char *, char *, int);

int main() {
	char s1[10], s2[100] = "Bilgisayar";
	ntanekopyala(s1, s2, 5);
	printf("%s", s1);
	return 0;
}

void ntanekopyala(char *dizgi1, char *dizgi2, int n) {
	while (n > 0 && *dizgi2 != '\0') {
        *dizgi1 = *dizgi2;
        dizgi1++;
        dizgi2++;
        n--;
    }
    *dizgi1 = '\0';
}
