#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
        if(ch >= 'A' & ch <= 'Z')
    {
        printf("\n'%c' is s Capital letter.\n", ch);
    }
    else if(ch >= 'a' & ch <= 'z')
    {
        printf("\n'%c' is a Small letter.\n", ch);
    }
    else if( ch >= '0' & ch <= '9')
    {
        printf("\n'%c' is a digit.\n", ch);
    }
    else
    {
        printf("\n'%c' is a Special symbol.\n", ch);
    }
    return 0;
}
