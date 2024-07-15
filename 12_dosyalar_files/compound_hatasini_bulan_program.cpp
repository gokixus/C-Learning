#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1024

void check_braces(FILE *file) {
    int open_braces = 0;
    char line[MAX_LINE_LENGTH];
    
    while (fgets(line, sizeof(line), file)) {
        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] == '{') {
                open_braces++;
            } else if (line[i] == '}') {
                open_braces--;
            }
        }
    }
    
    if (open_braces != 0) {
        printf("Compound statement missing }\n");
    } else {
        printf("No missing braces found.\n");
    }
}

int main() {
    char filename[256];
    FILE *file;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    check_braces(file);

    fclose(file);
    return EXIT_SUCCESS;
}

