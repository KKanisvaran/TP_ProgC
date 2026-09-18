#include <stdio.h>
#include "operator.h"
#include "fichier.h"

void exercice_operateurs() {
    int num1, num2;
    char op;
    int resultat;

    printf("Entrez num1 : ");
    scanf("%d", &num1);
    printf("Entrez num2 : ");
    scanf("%d", &num2);
    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    switch (op) {
        case '+': resultat = somme(num1, num2); break;
        case '-': resultat = difference(num1, num2); break;
        case '*': resultat = produit(num1, num2); break;
        case '/': resultat = quotient(num1, num2); break;
        case '%': resultat = modulo(num1, num2); break;
        case '&': resultat = et(num1, num2); break;
        case '|': resultat = ou(num1, num2); break;
        case '~': resultat = negation(num1, num2); break;
        default:
            printf("Operateur inconnu.\n");
            return;
    }

    printf("Resultat : %d\n", resultat);
}

void exercice_fichier() {
    int choix;

    printf("Que souhaitez-vous faire ?\n");
    printf("1. Lire un fichier\n");
    printf("2. Ecrire dans un fichier\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    if (choix == 1) {
        char nom[100];
        printf("Entrez le nom du fichier a lire : ");
        scanf("%s", nom);
        lire_fichier(nom);
    } else if (choix == 2) {
        char nom[100];
        char message[256];
        printf("Entrez le nom du fichier dans lequel vous souhaitez ecrire : ");
        scanf("%s", nom);
        printf("Entrez le message a ecrire : ");
        scanf(" %[^\n]", message);
        ecrire_dans_fichier(nom, message);
    } else {
        printf("Choix invalide.\n");
    }
}

int main() {
    int choix;

    printf("Quel exercice souhaitez-vous executer ?\n");
    printf("1. Calcul avec operateurs (4.1)\n");
    printf("2. Gestion de fichiers (4.2)\n");
    printf("7. Gestion d'une liste de couleurs (4.7)\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            exercice_operateurs();
            break;
        case 2:
            exercice_fichier();
            break;
        case 7:
            printf("Exercice 4.7 pas encore disponible.\n");
            break;
        default:
            printf("Choix invalide.\n");
            break;
    }

    return 0;
}
