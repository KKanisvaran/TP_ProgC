#include <stdio.h>

int main() {

    char a = 'K';
    signed char b = 'A';
    unsigned char c = 'N';

    short d = 12347;
    signed short e = 23451;
    unsigned short f = 54321;

    int g = 1357911;
    signed int h = 2468135;
    unsigned int i = 3141592;

    long int j = 123456789;
    signed long int k = 987654321;
    unsigned long int l = 876543210;

    long long int m = 1234567890123;
    signed long long int n = 9876543210123;
    unsigned long long int o = 12345678901234;

    float p = 7.239;
    double q = 12.3456789;
    long double r = 0.123456789012345;

    printf("char : %c\n", a);
    printf("signed char : %c\n", b);
    printf("unsigned char : %c\n", c);

    printf("short : %hd\n", d);
    printf("signed short : %hd\n", e);
    printf("unsigned short : %hu\n", f);

    printf("int : %d\n", g);
    printf("signed int : %d\n", h);
    printf("unsigned int : %u\n", i);

    printf("long int : %ld\n", j);
    printf("signed long int : %ld\n", k);
    printf("unsigned long int : %lu\n", l);

    printf("long long int : %lld\n", m);
    printf("signed long long int : %lld\n", n);
    printf("unsigned long long int : %llu\n", o);

    printf("float : %f\n", p);
    printf("double : %.7f\n", q);
    printf("long double : %.15Lf\n", r);

    return 0;
}