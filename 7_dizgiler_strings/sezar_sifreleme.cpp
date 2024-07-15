#include <stdio.h>
#include <string.h>

void sezar(char *, char *, int);

int main() {
	char s1[] = "red fox";
	char s2[50];
	
	sezar(s1, s2, 3);
	printf("Sifreli hali : \n%s", s2);
	return 0;
}

void sezar(char *s1, char *s2, int ileri) {
	int i;
	char ch;
	for(i = 0 ; s1[i] ; i++) {
		ch = s1[i];
        if(ch >= 'a' && ch <= 'z') {
            ch = ch + ileri;
            if(ch > 'z') {
                ch = ch - 'z' + 'a' - 1;
            }
            s2[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z') {
            ch = ch + ileri;
            if(ch > 'Z') {
                ch = ch - 'Z' + 'A' - 1;
            }
            s2[i] = ch;
        }
        else {
        	s2[i] = ch;
		}
	}
	s2[i] = '\0';
}
