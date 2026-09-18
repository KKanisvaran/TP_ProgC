#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {

    int tab[TAILLE];

    srand(time(NULL));

    for (int i = 0; i < TAILLE; i++) {
        tab[i] = rand() % 100 - 50;
    }

    printf("Tableau non trie :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    for (int i = 0; i < TAILLE - 1; i++) {
        for (int j = 0; j < TAILLE - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    printf("Tableau trie par ordre croissant :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
