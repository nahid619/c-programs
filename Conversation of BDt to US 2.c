#include<stdio.h>
int main()
{
    int BDT, USD;
    float remainder;

    printf("Enter the amount in BDT: \n");
    scanf("%d", &BDT);

    USD = BDT / 77.5;
    remainder = BDT - (77.5 * USD);

    printf("USD= %d USD %.1f BDT", USD, remainder);
    return 0;
}
