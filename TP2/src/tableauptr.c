#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 10

int main() {

    int tabInt[TAILLE];
    float tabFloat[TAILLE];

    srand(time(NULL));

    int *pInt = tabInt;
    float *pFloat = tabFloat;

    for (int i = 0; i < TAILLE; i++) {
        *(pInt + i) = rand() % 100;
        *(pFloat + i) = (float)(rand() % 1000) / 100.0f;
    }

    printf("Tableau d'entiers (avant la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(pInt + i));
    }
    printf("\n");

    printf("Tableau de flottants (avant la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(pFloat + i));
    }
    printf("\n");

    for (int i = 0; i < TAILLE; i += 2) {
        *(pInt + i) = *(pInt + i) * 3;
        *(pFloat + i) = *(pFloat + i) * 3;
    }

    printf("\nTableau d'entiers (apres la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(pInt + i));
    }
    printf("\n");

    printf("Tableau de flottants (apres la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(pFloat + i));
    }
    printf("\n");

    return 0;
}
