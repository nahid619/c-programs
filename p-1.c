#include<stdio.h>

int main()
{
    int a,b;
    int operation;

    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");

    printf("Enter the values of a & b: ");
    scanf("%d %d",&a,&b);

    printf("Enter your Choice : ");
    scanf("%d",&operation);

    switch(operation)
    {
    case 1  :
        printf("Sum of %d and %d is : %d",a,b,a+b);
        break;
    case 2  :
        printf("Difference of %d and %d is : %d",a,b,a-b);
        break;
    case 3  :
        printf("Multiplication of %d and %d is : %d",a,b,a*b);
        break;
    case 4  :
        printf("Division of Two Numbers is %d : ",a/b);
        break;
    default :
        printf("the choice is wrong.");
        break;
    }
    return 0;
}
