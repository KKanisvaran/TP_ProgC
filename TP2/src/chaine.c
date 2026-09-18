#include <stdio.h>

int main() {

    char s1[50] = "Hello";
    char s2[50] = " World!";
    char copie[50];
    char resultat[100];

    int longueur = 0;
    while (s1[longueur] != '\0') {
        longueur++;
    }
    printf("Longueur de \"%s\" : %d\n", s1, longueur);

    int i = 0;
    while (s1[i] != '\0') {
        copie[i] = s1[i];
        i++;
    }
    copie[i] = '\0';
    printf("Copie de \"%s\" : \"%s\"\n", s1, copie);

    int j = 0;
    while (s1[j] != '\0') {
        resultat[j] = s1[j];
        j++;
    }
    int k = 0;
    while (s2[k] != '\0') {
        resultat[j] = s2[k];
        j++;
        k++;
    }
    resultat[j] = '\0';
    printf("Concatenation : \"%s\"\n", resultat);

    return 0;
}
