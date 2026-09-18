#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

struct RGBA {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct CouleurCompte {
    struct RGBA couleur;
    int compte;
};

int main() {

    struct RGBA couleurs[TAILLE];
    struct CouleurCompte distinctes[TAILLE];
    int nbDistinctes = 0;

    srand(time(NULL));

    for (int i = 0; i < TAILLE; i++) {
        couleurs[i].r = rand() % 5;
        couleurs[i].g = rand() % 5;
        couleurs[i].b = rand() % 5;
        couleurs[i].a = 0xff;
    }

    for (int i = 0; i < TAILLE; i++) {
        int trouve = -1;
        for (int j = 0; j < nbDistinctes; j++) {
            if (distinctes[j].couleur.r == couleurs[i].r &&
                distinctes[j].couleur.g == couleurs[i].g &&
                distinctes[j].couleur.b == couleurs[i].b &&
                distinctes[j].couleur.a == couleurs[i].a) {
                trouve = j;
                break;
            }
        }
        if (trouve == -1) {
            distinctes[nbDistinctes].couleur = couleurs[i];
            distinctes[nbDistinctes].compte = 1;
            nbDistinctes++;
        } else {
            distinctes[trouve].compte++;
        }
    }

    for (int i = 0; i < nbDistinctes; i++) {
        printf("%02x 0x%02x 0x%02x 0x%02x : %d\n",
               distinctes[i].couleur.a,
               distinctes[i].couleur.r,
               distinctes[i].couleur.g,
               distinctes[i].couleur.b,
               distinctes[i].compte);
    }

    return 0;
}
