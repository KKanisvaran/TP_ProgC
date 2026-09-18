#include <stdio.h>

int main() {

    int compteur = 14;

    for (int i = 1; i <= compteur; i++) {

        for (int j = 1; j <= i; j++) {

            if (i == compteur || j == 1 || j == i) {
                printf("*");
            }
            else {
                printf("#");
            }

            if (j < i) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}