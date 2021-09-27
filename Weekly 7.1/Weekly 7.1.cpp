#include <stdio.h>

int main()
{
    double a, b;
    printf("Enter A & B :");
    scanf_s("%lf %lf", &a, &b);
    a = a - b;
    b = a + b;
    a = b - a;
    printf("A= %lf\n", a);
    printf("B= %lf\n", b);
    return 0;
}

