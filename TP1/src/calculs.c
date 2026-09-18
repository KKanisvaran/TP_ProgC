
#include <stdio.h>

int main() {

    int num1 = 16;
    int num2 = 3;
    char op = '*';

    switch (op) {

        case '+':
            printf("Addition : %d\n", num1 + num2);
            break;

        case '-':
            printf("Soustraction : %d\n", num1 - num2);
            break;

        case '*':
            printf("Multiplication : %d\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0) {
                printf("Division : %d\n", num1 / num2);
            }
            else {
                printf("Division par zero impossible\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                printf("Modulo : %d\n", num1 % num2);
            }
            else {
                printf("Modulo par zero impossible\n");
            }
            break;

        case '&':
            printf("ET binaire : %d\n", num1 & num2);
            break;

        case '|':
            printf("OU binaire : %d\n", num1 | num2);
            break;

        case '~':
            printf("NON binaire : %d\n", ~num1);
            break;

        default:
            printf("Operateur inconnu\n");
            break;
    }

    return 0;
}