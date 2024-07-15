#include <stdio.h>

#define SIZE 100

void buNedir(char *s1, char *s2, int n) {
	char *ptr;
	for(ptr = s1 ; *ptr != '\0' ; ptr++) {
	}
	while(n-- && *s2 != '\0') {
		*ptr = *s2;
		ptr++;
		s2++;
	}
	*ptr = '\0';
}

int main() {
	char s1[SIZE] = "Aaaaaaa";
	char s2[SIZE] = "Zzzzzzz";
	buNedir(s1, s2, 3);
	printf("s1 = (%s), s2 = (%s)\n", s1, s2);
	return 0;
}
