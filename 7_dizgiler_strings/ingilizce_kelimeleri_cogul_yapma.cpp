#include <stdio.h>
#include <string.h>

void cogulYap(char *str1, char *str2) {
	int len = strlen(str1);
	if(str1[len-1] == 'y') {
		strcpy(str2, str1);
		str2[len-1] = '\0';
		strcat(str2, "ies");
	}
	else if(str1[len-1] == 's' ||
			(str1[len-1] == 'h' && str1[len-2] == 'c') ||
			(str1[len-1] == 'h' && str1[len-2] == 's')) {
		strcpy(str2, str1);
		strcat(str2, "es");
	}
	else {
		strcpy(str2, str1);
		strcat(str2, "s");
	}
}

int main() {
	char string1[90], string2[90];
	printf("Bir ingilizce kelime giriniz: ");
	scanf("%s", string1);
	
	cogulYap(string1, string2);
	printf("%s cogulu --> %s\n", string1, string2);
	return 0;
}
