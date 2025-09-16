#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a statement: ");
    gets(str);   // simple input (unsafe, but okay for lab)

    while (str[i] != '\0') {
        // If identifier (letters only for simplicity)
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            printf("Identifier: ");
            while ((str[i] >= 'a' && str[i] <= 'z') || 
                   (str[i] >= 'A' && str[i] <= 'Z') || 
                   (str[i] >= '0' && str[i] <= '9') || 
                   str[i] == '_') {
                printf("%c", str[i]);
                i++;
            }
            printf("\n");
        }
        // If number (0–9, possibly multi-digit)
        else if (str[i] >= '0' && str[i] <= '9') {
            printf("Number: ");
            while (str[i] >= '0' && str[i] <= '9') {
                printf("%c", str[i]);
                i++;
            }
            printf("\n");
        }
        else {
            i++; // skip spaces, commas, operators, semicolons, etc.
        }
    }

    return 0;
}