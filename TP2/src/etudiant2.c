#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[20];
    char prenom[20];
    char adresse[50];
    float note1;
    float note2;
};

int main() {

    struct Etudiant etudiants[5];

    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note1 = 16.5;
    etudiants[0].note2 = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note1 = 14.0;
    etudiants[1].note2 = 14.1;

    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Julie");
    strcpy(etudiants[2].adresse, "5, Rue Victor Hugo, Paris");
    etudiants[2].note1 = 12.3;
    etudiants[2].note2 = 15.0;

    strcpy(etudiants[3].nom, "Petit");
    strcpy(etudiants[3].prenom, "Thomas");
    strcpy(etudiants[3].adresse, "12, Avenue de la Republique, Lyon");
    etudiants[3].note1 = 18.0;
    etudiants[3].note2 = 17.2;

    strcpy(etudiants[4].nom, "Leroy");
    strcpy(etudiants[4].prenom, "Sophie");
    strcpy(etudiants[4].adresse, "8, Rue des Fleurs, Marseille");
    etudiants[4].note1 = 9.5;
    etudiants[4].note2 = 10.8;

    for (int i = 0; i < 5; i++) {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prenom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1 : %.1f\n", etudiants[i].note1);
        printf("Note 2 : %.1f\n\n", etudiants[i].note2);
    }

    return 0;
}
