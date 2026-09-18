#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {

    int tab[TAILLE];

    srand(time(NULL));

    for (int i = 0; i < TAILLE; i++) {
        tab[i] = rand() % 1000 + 1;
    }

    int plusGrand = tab[0];
    int plusPetit = tab[0];

    for (int i = 1; i < TAILLE; i++) {
        if (tab[i] > plusGrand) {
            plusGrand = tab[i];
        }
        if (tab[i] < plusPetit) {
            plusPetit = tab[i];
        }
    }

    printf("Le numero le plus grand est : %d\n", plusGrand);
    printf("Le numero le plus petit est : %d\n", plusPetit);

    return 0;
}
