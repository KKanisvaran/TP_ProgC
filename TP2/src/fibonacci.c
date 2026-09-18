#include <stdio.h>

int main() {

    int n;

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    int u0 = 0;
    int u1 = 1;

    printf("Suite de Fibonacci (%d termes) :\n", n);

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", u0);
        } else if (i == 1) {
            printf(", %d", u1);
        } else {
            int suivant = u0 + u1;
            u0 = u1;
            u1 = suivant;
            printf(", %d", u1);
        }
    }

    printf("\n");

    return 0;
}
