
#include<stdio.h>

int main()
{
    float a,b;
    int operation;

    printf(" 1.+\n 2.-\n 3.*\n 4./\n");

    printf("Enter the values of a & b: ");
    scanf("%f %f",&a,&b);

    printf("Enter your Choice : ");
    scanf("%d",&operation);

    switch(operation);
    {
    case 1  :
        printf("Sum of %f and %f is : %f",a,b,a+b);
        break;
    case 2  :
        printf("Difference of %f and %f is : %f",a,b,a-b);
        break;
    case 3  :
        printf("Multiplication of %f and %f is : %f",a,b,a*b);
        break;
    case 4  :
        printf("Division of Two Numbers is %f : ",a/b);
        break;
    default :
        printf("the choice is wrong.");
        break;
    }
    return 0;
}
