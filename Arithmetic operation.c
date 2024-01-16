
#include<stdio.h>
int main()
{
    int a, b;
    int sum, sub, mult, mod;
    float div;

    printf("Enter any two numbers: ");
    scanf("%d%d", &a, &b);

    sum = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;
    mod = a % b;

    printf("SUM = %d\n", sum);
    printf("DIFFERENCE = %d\n", sub);
    printf("MULTIPLICATION = %d\n", mult);
    printf("DIVISION = %f\n", div);
    printf("MODULUS = %d", mod);

    return 0;
}

