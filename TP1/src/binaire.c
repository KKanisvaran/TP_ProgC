#include <stdio.h>

int main() {

    int nombres[] = {0, 4096, 65536, 65535, 1024};

    for (int i = 0; i < 5; i++) {

        int nombre = nombres[i];
        int diviseur = 1;

        for (; diviseur <= nombre / 2; diviseur *= 2);

        printf("%d en binaire : ", nombre);

        for (; diviseur > 0; diviseur /= 2) {
            printf("%d", (nombre / diviseur) % 2);
        }

        printf("\n");
    }

    return 0;
}