#include<stdio.h>
int main()
{
    int num,a,b;

    printf("\nPlease enter a 3 digit number: ");
    scanf("%d", &num);

    a=num/100;
    b=num%10;

    printf("Square of %d is %d \nand \nsquare of %d is %d\n", a,a*a,b,b*b);

    return 0;
}
