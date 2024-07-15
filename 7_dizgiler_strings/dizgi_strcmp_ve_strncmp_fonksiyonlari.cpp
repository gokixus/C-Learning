#include <stdio.h>
#include <string.h>

int main() {
	char s1[] = "Yorulmaz, Betul";
	char s2[] = "Yorulmaz, Betul";
	char s3[] = "Yorulmaz, Seher";
	
	printf("s1 = \"%s\" \n", s1);
	printf("s2 = \"%s\" \n", s2);
	printf("s3 = \"%s\" \n", s3);
	printf("strcmp(s1, s2) = %d \n", strcmp(s1, s2));
	printf("strcmp(s1, s3) = %d \n", strcmp(s1, s3));
	printf("strcmp(s3, s1) = %d \n", strcmp(s3, s1));
	printf("strncmp(s1, s3, 8) = %d \n", strncmp(s1, s3, 8));
	printf("strncmp(s1, s3, 12) = %d \n", strncmp(s1, s3, 12));
	printf("strncmp(s3, s1, 12) = %d \n", strncmp(s3, s1, 12));
	return 0;
}
