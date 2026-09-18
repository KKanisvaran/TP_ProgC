#include <stdio.h>

int factorielle(int num) {
    if (num == 0) {
        printf("fact(0): 1\n");
        return 1;
    } else {
        int valeur = num * factorielle(num - 1);
        printf("fact(%d): %d\n", num, valeur);
        return valeur;
    }
}

int main() {

    int valeurs[] = {0, 1, 3, 5, 7};
    int taille = sizeof(valeurs) / sizeof(valeurs[0]);

    for (int i = 0; i < taille; i++) {
        factorielle(valeurs[i]);
        printf("\n");
    }

    return 0;
}
