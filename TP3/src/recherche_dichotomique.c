#include <stdio.h>

#define TAILLE 100

int main() {

    int tab[TAILLE];
    int cible;
    int trouve = 0;

    for (int i = 0; i < TAILLE; i++) {
        tab[i] = i * 2 - 20;
    }

    printf("Tableau trie :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &cible);

    int debut = 0;
    int fin = TAILLE - 1;

    while (debut <= fin) {
        int milieu = (debut + fin) / 2;
        if (tab[milieu] == cible) {
            trouve = 1;
            break;
        } else if (tab[milieu] < cible) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
        }
    }

    if (trouve) {
        printf("\nResultat : entier present\n");
    } else {
        printf("\nResultat : entier absent\n");
    }

    return 0;
}
