#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Usage : %s <fichier>\n", argv[0]);
        return 1;
    }

    FILE *f = fopen(argv[1], "r");
    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", argv[1]);
        return 1;
    }

    char phrase[256];
    printf("Entrez la phrase que vous souhaitez rechercher : ");
    scanf(" %[^\n]", phrase);

    int longueurPhrase = strlen(phrase);

    printf("\nResultats de la recherche :\n");

    char ligne[1024];
    int numeroLigne = 0;

    while (fgets(ligne, sizeof(ligne), f) != NULL) {
        numeroLigne++;
        int occurrences = 0;
        int longueurLigne = strlen(ligne);

        for (int i = 0; i <= longueurLigne - longueurPhrase; i++) {
            int identique = 1;
            for (int j = 0; j < longueurPhrase; j++) {
                if (ligne[i + j] != phrase[j]) {
                    identique = 0;
                    break;
                }
            }
            if (identique) {
                occurrences++;
            }
        }

        if (occurrences > 0) {
            printf("Ligne %d, %d fois\n", numeroLigne, occurrences);
        }
    }

    fclose(f);

    return 0;
}
