#include <stdio.h>
#include <string.h>

int main() {
	char s1[9] = "Muhammet";
	char s2[9] = "Yorulmaz";
	char s3[9];
	char s4[9]; 
	char s5[80];
	
	strcpy(s3, s1);
	strncpy(s4, s2, 7);
	s4[7] = '\0';
	printf("s1 = %s \n", s1);
	printf("s2 = %s \n", s2); 
	printf("s3 = %s \n", s3); 
	printf("s4 = %s \n", s4);
	strcpy(s5, s4);
	strcat(s5, s1);
	strncat(s5, s2, 4);
	printf("s5 = %s \n", s5);
	return 0; 
}
