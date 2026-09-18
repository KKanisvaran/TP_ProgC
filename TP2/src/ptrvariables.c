#include <stdio.h>

int main() {

    char a = 'K';
    short b = 12347;
    int c = 1357911;
    long int d = 123456789;
    long long int e = 1234567890123;
    float f = 7.239;
    double g = 12.3456789;
    long double h = 0.123456789012345;

    char *pa = &a;
    short *pb = &b;
    int *pc = &c;
    long int *pd = &d;
    long long int *pe = &e;
    float *pf = &f;
    double *pg = &g;
    long double *ph = &h;

    printf("Avant la manipulation :\n");
    printf("Adresse de a : %p, Valeur de a : %x\n", (void *)pa, *pa);
    printf("Adresse de b : %p, Valeur de b : %hx\n", (void *)pb, *pb);
    printf("Adresse de c : %p, Valeur de c : %x\n", (void *)pc, *pc);
    printf("Adresse de d : %p, Valeur de d : %lx\n", (void *)pd, *pd);
    printf("Adresse de e : %p, Valeur de e : %llx\n", (void *)pe, *pe);
    printf("Adresse de f : %p, Valeur de f (bits) : %x\n", (void *)pf, *(unsigned int *)pf);
    printf("Adresse de g : %p, Valeur de g (bits) : %lx\n", (void *)pg, *(unsigned long *)pg);
    printf("Adresse de h : %p\n", (void *)ph);

    *pa = 'A';
    *pb = 23451;
    *pc = 2468135;
    *pd = 987654321;
    *pe = 9876543210123;
    *pf = 1.0;
    *pg = 3.14159;
    *ph = 0.987654321098765;

    printf("\nApres la manipulation :\n");
    printf("Adresse de a : %p, Valeur de a : %x\n", (void *)pa, *pa);
    printf("Adresse de b : %p, Valeur de b : %hx\n", (void *)pb, *pb);
    printf("Adresse de c : %p, Valeur de c : %x\n", (void *)pc, *pc);
    printf("Adresse de d : %p, Valeur de d : %lx\n", (void *)pd, *pd);
    printf("Adresse de e : %p, Valeur de e : %llx\n", (void *)pe, *pe);
    printf("Adresse de f : %p, Valeur de f (bits) : %x\n", (void *)pf, *(unsigned int *)pf);
    printf("Adresse de g : %p, Valeur de g (bits) : %lx\n", (void *)pg, *(unsigned long *)pg);
    printf("Adresse de h : %p\n", (void *)ph);

    return 0;
}
