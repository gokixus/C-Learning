#include <stdio.h>
#include <string.h>

void bulcikar(char*,char*);

int main() {
	char kelime[] = "Kamuran", s[] = "mur";
	bulcikar(kelime, s);
	printf("%s\n", kelime);
	return 0;
}

void bulcikar(char *kelime, char *s) {
	char *p = strstr(kelime, s);
    if (p) {
        *p = '\0';
        strcat(kelime, p + strlen(s));
    }
}
