#include <stdio.h>

int main() {
    char rahad[1000];  // To hold the whole multi-line string
    char test[10];     // Temporary for each operator
    int i = 0, j = 0;

    // Read until * (like your original) or until EOF
    scanf("%[^*]", rahad);

    while (rahad[i] != '\0') {
        j = 0;

        // Skip newlines and spaces
        while (rahad[i] == '\n' || rahad[i] == ' ')
            i++;

        // Copy the operator until newline or space
        while (rahad[i] != '\n' && rahad[i] != ' ' && rahad[i] != '\0') {
            test[j++] = rahad[i++];
        }
        test[j] = '\0';

        // Skip empty tokens (like double newlines at end)
        if (j == 0) continue;

        // Classify
        if ((test[0] == '=' && test[1] == '=') ||
            (test[0] == '!' && test[1] == '=') ||
            (test[0] == '<' && test[1] == '\0') ||
            (test[0] == '>' && test[1] == '\0') ||
            (test[0] == '<' && test[1] == '=') ||
            (test[0] == '>' && test[1] == '=')) {
            printf("%s : Relational Operator\n", test);
        }
        else if ((test[0] == '&' && test[1] == '&') ||
                 (test[0] == '|' && test[1] == '|') ||
                 (test[0] == '!' && test[1] == '\0')) {
            printf("%s : Logical Operator\n", test);
        }
        else if (test[0] == '+' || test[0] == '-' ||
                 test[0] == '*' || test[0] == '/' ||
                 test[0] == '%') {
            printf("%s : Arithmetic Operator\n", test);
        }
        else if (test[0] == '=' && test[1] == '\0') {
            printf("%s : Assignment Operator\n", test);
        }
        else {
            printf("%s : Invalid Operator\n", test);
        }
    }

    return 0;
}
