#include <stdlib.h>
#include <stdio.h>
#include "liste.h"

void init_liste(struct liste_couleurs *liste) {
    liste->tete = NULL;
}

void insertion(struct couleur *c, struct liste_couleurs *liste) {
    struct noeud *nouveau = malloc(sizeof(struct noeud));
    nouveau->valeur = *c;
    nouveau->suivant = NULL;

    if (liste->tete == NULL) {
        liste->tete = nouveau;
    } else {
        struct noeud *courant = liste->tete;
        while (courant->suivant != NULL) {
            courant = courant->suivant;
        }
        courant->suivant = nouveau;
    }
}

void parcours(struct liste_couleurs *liste) {
    struct noeud *courant = liste->tete;
    int i = 1;

    while (courant != NULL) {
        printf("Couleur %d : R=%d G=%d B=%d A=%d\n", i,
               courant->valeur.r, courant->valeur.g,
               courant->valeur.b, courant->valeur.a);
        courant = courant->suivant;
        i++;
    }
}
