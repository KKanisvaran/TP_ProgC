

#include <stdio.h>
#include <stdbool.h>

int main() {

    int a = 16;
    int b = 3;

    printf("Addition : %d\n", a + b);
    printf("Soustraction : %d\n", a - b);
    printf("Multiplication : %d\n", a * b);
    printf("Division : %d\n", a / b);
    printf("Modulo : %d\n", a % b);

    bool egal = (a == b);
    bool superieur = (a > b);

    printf("a est egal a b : %s\n", egal ? "true" : "false");
    printf("a est superieur a b : %s\n", superieur ? "true" : "false");

    return 0;
}