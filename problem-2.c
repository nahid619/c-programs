#include <stdio.h>
int main()
{
    int a, b, n;

    printf("Enter number of rows and columns: ");
    scanf("%d", &n);

    for(a=1; a<=n; a++)
    {
        for(b=1; b<=n; b++)
        {
            if(a==1 || a==n || b==1 || b==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
