#include <stdio.h>

int main()

{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if(ch >= 'A' & ch <= 'Z')
    {
        printf("\n'%c' is uppercase alphabet.\n", ch);
    }
    else if(ch >= 'a' & ch <= 'z')
    {
        printf("\n'%c' is lowercase alphabet.\n", ch);
    }
    else if( ch >= '0' & ch <= '9')
    {
        printf("\n'%c' is a number.\n", ch);
    }
    else
    {
        printf("\n'%c' is a symbol.\n", ch);
    }

    return 0;
}
