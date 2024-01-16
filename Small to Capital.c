#include <stdio.h>
int main()
{
    char lower;

    printf("Enter any Small letter: ");
    scanf("%c", &lower);

    printf("\nThe Capital letter is = %c \n ", lower-32);

    return 0;
}
