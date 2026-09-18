#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {

    int tab[TAILLE];
    int cible;
    int trouve = 0;

    srand(time(NULL));

    for (int i = 0; i < TAILLE; i++) {
        tab[i] = rand() % 100 - 50;
    }

    printf("Tableau :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &cible);

    for (int i = 0; i < TAILLE; i++) {
        if (tab[i] == cible) {
            trouve = 1;
            break;
        }
    }

    if (trouve) {
        printf("\nResultat : entier present\n");
    } else {
        printf("\nResultat : entier absent\n");
    }

    return 0;
}
