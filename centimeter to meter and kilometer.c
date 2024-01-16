#include <stdio.h>
int main()
{
    float cm, meter, km;

    printf("Enter length in centimeter: ");
    scanf("%f", &cm);

    meter = cm / 100.0;
    km    = cm / 100000.0;

    printf("Meter = %.3f m \n", meter);
    printf("Kilometer = %.3f km", km);

    return 0;
}
