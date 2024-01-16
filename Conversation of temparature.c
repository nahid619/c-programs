
#include <stdio.h>

int main()
{
    float Celsius, Fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &Celsius);
    Fahrenheit= 1.8*Celsius+32;;
    printf("Fahrenheit = %.2f\n", Fahrenheit);
    return 0;
}
