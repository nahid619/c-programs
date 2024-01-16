
#include <stdio.h>
int main()
{
    int s, sum=0 ;

    for (s = 1; s <= 10; s++)
    {
        sum = sum + s;
        printf("%d ",s);
    }
    printf("\nThe Sum is : %d\n", sum);

    return 0;
}
