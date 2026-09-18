#include <stdio.h>
#include "fichier.h"

struct Etudiant {
    char nom[20];
    char prenom[20];
    char adresse[50];
    float note1;
    float note2;
};

int main() {

    struct Etudiant etudiants[5];

    for (int i = 0; i < 5; i++) {
        printf("Entrez les details de l'etudiant.e %d :\n", i + 1);
        printf("Nom : ");
        scanf("%s", etudiants[i].nom);
        printf("Prenom : ");
        scanf("%s", etudiants[i].prenom);
        printf("Adresse : ");
        scanf(" %[^\n]", etudiants[i].adresse);
        printf("Note 1 : ");
        scanf("%f", &etudiants[i].note1);
        printf("Note 2 : ");
        scanf("%f", &etudiants[i].note2);
        printf("\n");

        char ligne[200];
        sprintf(ligne, "%s %s %s %.1f %.1f", etudiants[i].nom, etudiants[i].prenom,
                etudiants[i].adresse, etudiants[i].note1, etudiants[i].note2);
        ecrire_dans_fichier("etudiant.txt", ligne);
    }

    printf("Les details des etudiants ont ete enregistres dans le fichier etudiant.txt.\n");

    return 0;
}
