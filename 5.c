#include <stdio.h>
#include <ctype.h>

int main() {
    char expr[1000];
    int i = 0;

    // Input
    gets(expr);

    while (expr[i] != '\0') {
        if (expr[i] == ' ') { // skip spaces
            i++;
            continue;
        }
        if (isalpha(expr[i])) { // identifier
            printf("IDENTIFIER: %c\n", expr[i]);
            i++;
        }
        else if (isdigit(expr[i])) { // number
            int num = 0;
            while (isdigit(expr[i])) {
                num = num * 10 + (expr[i] - '0');
                i++;
            }
            printf("NUMBER: %d\n", num);
        }
        else if (expr[i] == '(' || expr[i] == ')') { // parenthesis
            printf("PARENTHESIS: %c\n", expr[i]);
            i++;
        }
        else { // operator
            printf("OPERATOR: %c\n", expr[i]);
            i++;
        }
    }
    return 0;
}
