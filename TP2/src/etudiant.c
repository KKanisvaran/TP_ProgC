#include <stdio.h>

int main() {

    char noms[5][20] = {"Dupont", "Martin", "Durand", "Petit", "Leroy"};
    char prenoms[5][20] = {"Marie", "Pierre", "Julie", "Thomas", "Sophie"};
    char adresses[5][50] = {
        "20, Boulevard Niels Bohr, Lyon",
        "22, Boulevard Niels Bohr, Lyon",
        "5, Rue Victor Hugo, Paris",
        "12, Avenue de la Republique, Lyon",
        "8, Rue des Fleurs, Marseille"
    };
    float notesProgC[5] = {16.5, 14.0, 12.3, 18.0, 9.5};
    float notesSysExpl[5] = {12.1, 14.1, 15.0, 17.2, 10.8};

    for (int i = 0; i < 5; i++) {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prenom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note en Programmation C : %.1f\n", notesProgC[i]);
        printf("Note en Systeme d'exploitation : %.1f\n\n", notesSysExpl[i]);
    }

    return 0;
}
