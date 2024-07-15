#include <stdio.h>
#include <string.h>

void buyukTamSayiTopla(char *, char *, char *);

int main() {
	char s1[] = "999999999999999999999999999999999999999";
	char s2[] = "111";
	char s3[42];
	buyukTamSayiTopla(s1, s2, s3);
	printf("%s\n", s3);
	return 0;
}

void buyukTamSayiTopla(char *s1, char *s2, char *s3) {
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int i, j;
	
	for (int i = 0; i < len1 / 2; ++i) {
        char temp = s1[i];
        s1[i] = s1[len1 - i - 1];
        s1[len1 - i - 1] = temp;
    }
    for (int i = 0; i < len2 / 2; ++i) {
        char temp = s2[i];
        s2[i] = s2[len2 - i - 1];
        s2[len2 - i - 1] = temp;
    }
    
    int carry = 0;
    for(i = 0 ; i < len1 || i < len2 ; i++) {
    	int digit1 = (i < len1) ? (s1[i] - '0') : 0;
    	int digit2 = (i < len2) ? (s2[i] - '0') : 0;
    	int sum = digit1 + digit2 + carry;
    	carry = sum / 10;
    	s3[i] = (sum % 10 ) + '0';
	}
	
	if(carry) {
		s3[i++] = carry + '0';
	}
	s3[i] = '\0';
	
	for(j = 0 ; j < i / 2 ; j++) {
		char temp = s3[j];
		s3[j] = s3[i - j - 1];
		s3[i - j - 1] = temp;
	}
}
