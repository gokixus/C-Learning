#include <stdio.h>

void strappend(char*,char*);

int main() {
	char s1[50] = "Baskent";
	char s2[] = "liler";
	strappend(s1, s2);
	printf("%s", s1);
	return 0;
}

void strappend(char *s1, char *s2) {
	int i = 0, j = 0;
	while(s1[i] != '\0') {
		i++;
	}
	while(s2[j] != '\0') {
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
}
