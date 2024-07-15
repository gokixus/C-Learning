#include <stdio.h>

int main() {
    int i, j, carpim_direnci;
    for (i = 10; i <= 99; i++) {
        carpim_direnci = 0;
        j = i;
        while (j > 9) {
            carpim_direnci++;
            j = (j % 10) * (j / 10);
        }
        printf("%d sayisinin carpim direnci = %d\n", i, carpim_direnci);
    }
    return 0;
}
