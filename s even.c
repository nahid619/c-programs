
#include <stdio.h>

int main()
{
    int a, b, c, d, e, X;

    printf("Enter five numbers: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);


    X==( a&&b&&c&&d&&e );

    switch(X%2)
    {
        case 0:
            printf("X are EVEN numbers \n",X);
            break;

        case 1:
            printf("X are not EVEN numbers \n",X);

    }

    return 0;
}
