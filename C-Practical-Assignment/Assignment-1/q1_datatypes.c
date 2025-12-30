#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';
    double d = 12.345;

    printf("int value = %d, size = %lu bytes\n", a, sizeof(a));
    printf("float value = %.2f, size = %lu bytes\n", b, sizeof(b));
    printf("char value = %c, size = %lu byte\n", c, sizeof(c));
    printf("double value = %.3lf, size = %lu bytes\n", d, sizeof(d));

    return 0;
}