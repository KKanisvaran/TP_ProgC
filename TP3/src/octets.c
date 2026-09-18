#include <stdio.h>

int main() {

    short s = 515;
    int i = 67305985;
    long int l = 578437695752307201;
    float f = 4.579404f;
    double d = 1.0;
    long double ld = 1.0L;

    unsigned char *p;

    p = (unsigned char *)&s;
    printf("Octets de short :\n");
    for (unsigned long k = 0; k < sizeof(s); k++) {
        printf(" %02x", p[k]);
    }
    printf("\n\n");

    p = (unsigned char *)&i;
    printf("Octets de int :\n");
    for (unsigned long k = 0; k < sizeof(i); k++) {
        printf(" %02x", p[k]);
    }
    printf("\n\n");

    p = (unsigned char *)&l;
    printf("Octets de long int :\n");
    for (unsigned long k = 0; k < sizeof(l); k++) {
        printf(" %02x", p[k]);
    }
    printf("\n\n");

    p = (unsigned char *)&f;
    printf("Octets de float :\n");
    for (unsigned long k = 0; k < sizeof(f); k++) {
        printf(" %02x", p[k]);
    }
    printf("\n\n");

    p = (unsigned char *)&d;
    printf("Octets de double :\n");
    for (unsigned long k = 0; k < sizeof(d); k++) {
        printf(" %02x", p[k]);
    }
    printf("\n\n");

    p = (unsigned char *)&ld;
    printf("Octets de long double :\n");
    for (unsigned long k = 0; k < sizeof(ld); k++) {
        printf(" %02x", p[k]);
    }
    printf("\n");

    return 0;
}
