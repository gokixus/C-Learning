#include <stdio.h>
#include <string.h>

int araSondan(char*, int, char);

int main() {
	char dizi[8] = {'a', 'n', 'k', 'a', 'r', 'a', '1', 'i'};
	printf("%d\n", araSondan(dizi, 8, 'a'));
	printf("%d\n", araSondan(dizi, 8, 'a'));
	printf("%d\n", araSondan(dizi, 8, 'a'));
	printf("%d\n", araSondan(dizi, 8, 'a'));
	return 0;
}

int araSondan(char *dizgi, int n, char aranan) {
	static int i;
	if(i == 0) {
		i = n - 1;
	}
	for(; i >= 0 ; i--) {
		if(dizgi[i] == aranan) {
			return i--;
		}
	}
	return -1;
}
