#include<stdio.h>
int main()
{
    int BDT, USD, BDT_1;

    printf("Enter the amount in BDT: \n");
    scanf("%d", &BDT);

    USD=BDT/77;
    BDT_1=BDT%77;

    printf("USD= %d USD %i BDT", USD, BDT_1);
    return 0;
}
