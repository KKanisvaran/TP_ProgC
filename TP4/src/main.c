#include <stdio.h>
#include "operator.h"

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
            printf("Exercice 4.2 pas encore disponible.\n");
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
