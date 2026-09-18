#include <stdio.h>

struct RGBA {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

int main() {

    struct RGBA couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0xa1, 0x33, 0x9f, 0xff},
        {0x00, 0x00, 0x00, 0xff},
        {0xff, 0xff, 0xff, 0xff},
        {0x1a, 0x2b, 0x3c, 0xff},
        {0x9e, 0x9e, 0x9e, 0x80},
        {0xff, 0x00, 0x00, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff}
    };

    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].r);
        printf("Vert : %d\n", couleurs[i].g);
        printf("Bleu : %d\n", couleurs[i].b);
        printf("Alpha : %d\n\n", couleurs[i].a);
    }

    return 0;
}
