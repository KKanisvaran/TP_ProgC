#include <stdio.h>
#include "fichier.h"

void lire_fichier(char *nom_de_fichier) {
    FILE *f = fopen(nom_de_fichier, "r");

    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", nom_de_fichier);
        return;
    }

    printf("Contenu du fichier %s :\n", nom_de_fichier);

    char ligne[256];
    while (fgets(ligne, sizeof(ligne), f) != NULL) {
        printf("%s", ligne);
    }
    printf("\n");

    fclose(f);
}

void ecrire_dans_fichier(char *nom_de_fichier, char *message) {
    FILE *f = fopen(nom_de_fichier, "a");

    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", nom_de_fichier);
        return;
    }

    fprintf(f, "%s\n", message);
    fclose(f);

    printf("Le message a ete ecrit dans le fichier %s.\n", nom_de_fichier);
}
