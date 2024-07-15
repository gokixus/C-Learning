#include <stdio.h>
#include <string.h>

void yapistirnk(char*,int,int,char*);

int main() {
	char s1[] = "Bilgisayar Arasinav";
	char s2[] = "102 Dersi";
	
	yapistirnk(s1, 12, 3, s2);
	printf("%s\n", s1);
}

void yapistirnk(char *s1, int x1, int x2, char *s2) {
	int i;
	for(i = 0 ; i < x2 ; i++) {
		s1[x1+i-1] = s2[i];
	}
	s1[strlen(s1)] = '\0';
}
