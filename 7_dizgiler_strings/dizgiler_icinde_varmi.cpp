#include <stdio.h>

int strnkcmp(char *s1, char *s2, int n, int k) {
	int i, j;
	int s2_len = 0;
	while(s2[s2_len] != '\0') {
		s2_len++;
	}
	if(k > s2_len) {
		return 0;
	}
	for(i = n-1, j = 0 ; j < k ; i++, j++) {
		if(s1[i] == '\0' || s2[j] == '\0') {
			return 0;
		}
		if(s1[i] != s2[j]) {
			return 0;
		}
	}
	return 1;
}

int main() {
	char s1[] = "Baskentliler";
	char s2[] = "kent";
	int n=4, k=3;
	printf("%d", strnkcmp(s1, s2, n, k));
	return 0;
}
