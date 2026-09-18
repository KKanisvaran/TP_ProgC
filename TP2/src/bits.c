#include <stdio.h>

int main() {

    int d = 268439552;

    int bit4 = (d >> (32 - 4)) & 1;
    int bit20 = (d >> (32 - 20)) & 1;

    if (bit4 == 1 && bit20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
