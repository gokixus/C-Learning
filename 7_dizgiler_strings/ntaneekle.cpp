#include <stdio.h>

void ntaneekle(char*,char*,int);

int main() {
	char s1[10] = "Bil", s2[10] = "gisayar";
	ntaneekle(s1, s2, 2);
	printf("%s", s1);
	return 0;
}

void ntaneekle(char *s1, char *s2, int n) {
	int i = 0, j = 0;
	while(s1[i] != '\0') {
		i++;
	}
	while(s2[j] != '\0' && j < n) {
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
}
