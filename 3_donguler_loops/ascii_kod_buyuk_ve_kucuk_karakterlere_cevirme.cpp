#include <stdio.h>

int main() {
    for (int i = 65; i <= 84; i++) {
        printf("%d\t%c\t%c\n", i, i, i+32);
    }
    return 0;
}

