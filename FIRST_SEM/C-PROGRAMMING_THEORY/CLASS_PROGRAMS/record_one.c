#include <stdio.h>

int main()
{
    int a = 10, b = 3;
    float x = 10.5, y = 2.5;
    double p = 20.5, q = 4.0;
    char c1 = 'A', c2 = 'B';

    printf("----- ARITHMETIC OPERATIONS -----\n\n");

    // Integer operations
    printf("INT:\n");
    printf("Addition       : %d\n", a + b);
    printf("Subtraction    : %d\n", a - b);
    printf("Multiplication : %d\n", a * b);
    printf("Division       : %d\n", a / b);
    printf("Modulus        : %d\n\n", a % b);

    // Float operations
    printf("FLOAT:\n");
    printf("Addition       : %.2f\n", x + y);
    printf("Subtraction    : %.2f\n", x - y);
    printf("Multiplication : %.2f\n", x * y);
    printf("Division       : %.2f\n\n", x / y);

    // Double operations
    printf("DOUBLE:\n");
    printf("Addition       : %.2lf\n", p + q);
    printf("Subtraction    : %.2lf\n", p - q);
    printf("Multiplication : %.2lf\n", p * q);
    printf("Division       : %.2lf\n\n", p / q);

    // Character operations
    printf("CHAR:\n");
    printf("Addition       : %d\n", c1 + c2);
    printf("Subtraction    : %d\n", c1 - c2);
    printf("Multiplication : %d\n", c1 * c2);
    printf("Division       : %d\n", c2 / c1);

    return 0;
}