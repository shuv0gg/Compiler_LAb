#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];
    int i;

    // Open file (make sure input.txt exists in same folder)
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read word by word
    while (fscanf(fp, "%s", str) != EOF) {
        i = 0;

        // If it starts with a letter → identifier
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            printf("Identifier: %s\n", str);
        }
        // If it starts with a digit → number
        else if (str[i] >= '0' && str[i] <= '9') {
            printf("Number: %s\n", str);
        }
        // Otherwise skip (operators, symbols, etc.)
    }

    fclose(fp);
    return 0;
}
